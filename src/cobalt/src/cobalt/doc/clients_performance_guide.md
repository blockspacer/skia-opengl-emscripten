# Cobalt Clients Performance Guide

This document contains a list of hints and tricks for using web technologies
that when employed will result in improved performance of Cobalt client apps.

[TOC]

## Avoid large opacity animations of DOM subtrees.

Be careful when applying the CSS opacity property to DOM subtrees.  When
applying opacity to a DOM leaf node, the renderer can usually easily render the
single element the way it normally would, except with an opacity parameter set.
When rendering a non-trivial multi-subnode DOM subtree though, in order for
the results to appear correct, the renderer has no choice but to create an
offscreen surface, render to that surface *without* opacity, and then finally
render the offscreen surface onto the onscreen surface *with* the set opacity
applied.

For some examples, suppose we have the following CSS:

```
<head>
  <style>
    .rectangle {
      position: absolute;
      width: 100px;
      height: 100px;
    }
    .red {
      background-color: red;
    }
    .green {
      background-color: green;
      transform: translate(25px, 25px);
    }
    .blue {
      background-color: blue;
      transform: translate(50px, 50px);
    }
    .half-opacity {
      opacity: 0.5;
    }
  </style>
</head>
```

Then when applying opacity to a subtree of 3 cascading rectangles,
```
<body>
  <div class="half-opacity">
    <div class="rectangle red"></div>
    <div class="rectangle green"></div>
    <div class="rectangle blue"></div>
  </div>
</body>
```
the results will look like this:

![Opacity applied to subtree](resources/clients_performance_guide/opacity_on_subtree.png)

which requires the browser to produce an offscreen surface the size of all three
rectangles, which can be expensive for performance and memory.

For comparison, when opacity is applied to leaf nodes individually,
```
<body>
  <div>
    <div class="rectangle red half-opacity"></div>
    <div class="rectangle green half-opacity"></div>
    <div class="rectangle blue half-opacity"></div>
  </div>
</body>
```
the results will look like this:

![Opacity to each element of subtree](resources/clients_performance_guide/opacity_on_individuals.png)

which is less expensive because each rectangle can be rendered directly with
the specified opacity value.

The problem in the first case where opacity is applied to the subtree is that
switching render targets to and from an offscreen surface is time consuming
for both the CPU and GPU, and can on some platforms noticeably slow down
performance, likely manifesting as a lower framerate in animations.  While it is
possible that Cobalt may cache the result, it is not guaranteed, and may not be
possible if the subtree is being animated.  Additionally, the offscreen surface
will of course consume memory that wouldn't have been required otherwise.

### Similar situations

While opacity tends to be the most common instigator of the behavior described
above, there are other situations that can trigger offscreen surface usage.
They are:

 - Setting `overflow: hidden` on a rotated subtree parent element (e.g. via
   `transform: rotate(...)`)
 - Setting `overflow: hidden` on a subtree parent element with rounded corners.

## Explicitly set Image src attributes to '' when finished with them.

Cobalt maintains an image cache with a preset capacity (e.g. default of 32MB on
platforms with 1080p UIs, but it can be customized).  When an image goes out
of scope and is no longer needed, instead of leaving it up to the garbage
collector to decide when an image should be destroyed and its resources
released, it is recommended that Image objects have their `src` attribute
explicitly cleared (i.e. set to `''`) when they are no longer needed, so
that Cobalt can reclaim the image resources as soon as possible.

## Be conservative with usage of the border-radius CSS property.

While Cobalt has significant optimizations in place for handling the rendering
of rounded corners, it still requires significantly more sophistication and
processing than rendering a normal rectangle.  This applies to a number of
different scenarios, such as using rounded corners on elements with either
background-color or background-image.  Particularly expensive however would
be to apply rounded corners on a parent node which has `overflow: hidden` set
(as mentioned above), since this requires the creation of an offscreen surface.

## Avoid large (e.g. fullscreen) divs

The more screen area that is covered by DOM elements, the more work the GPU has
to do, and so the lower the framerate will be.  For example, if a background
is desired, instead of creating a new fullscreen `<div>`, set the
desired background color or image on the `<body>` element which will cover the
display anyway.  Otherwise, the `<body>` element will render its background, and
then the `<div>` element will render over top of it (Cobalt is not smart enough
to know if an element completely coveres another element), resulting in more
pixels being touched than is necessary.

This type of optimization is related to the concept of "overdraw" from computer
graphics.  A good definition for overdraw can be found at
[https://developer.android.com/topic/performance/rendering/overdraw](https://developer.android.com/topic/performance/rendering/overdraw):

> "Overdraw refers to the system's drawing a pixel on the screen multiple times
>  in a single frame of rendering. For example, if we have a bunch of stacked
>  UI cards, each card hides a portion of the one below it... It manifests
>  itself as a performance problem by wasting GPU time to render pixels that
>  don't contribute to what the user sees on the screen."

The `<body>` element will always result in the display being filled with a
color, which is `rgba(0, 0, 0, 0)` by default.  Since `<body>` already
guarantees a full screen draw, the most optimal way of specifying a
background is to modify `<body>`'s background properties instead of adding
a layer on top of it.
