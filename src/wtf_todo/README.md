# WTF (Web Template Framework)

Web Template Framework was originally an integral part of [WebKit browser](http://www.webkit.org), and provides
huge bunch of useful classes, functions and templates used across all WebKit components. Now this code is
extracted and adjusted to use as a static library, so you can freely take advantage of it in your projects.

## Building

To build WTF use bundled `autogen.sh` script (after all it executes the `cmake` command and accepts all
its parameters).

    $ autogen.sh -DSINGLE_THREADED=1
    
Now you can compile and install it using `make`.

    $ make
    $ sudo make install

### Multi-threading

If you want WTF to support multi-threading, you need to have `pthreads` installed in your system. Installation
will detect it automatically. 

Using multi-threaded version you have to remember to initialize threading in your application:

    #include "wtf/Threading.h"
    
    int main()
    {
      WTF::initializeThreading();
      *snip*
    }

### Single-threaded build

If you want to build single-threaded version, use the following configuration: 

    $ autogen.sh -DSINGLE_THREADED=1

