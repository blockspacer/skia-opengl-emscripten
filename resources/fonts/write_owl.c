#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <emscripten.h>

/**
 * Inverse square root of two, for normalising velocity
 */
#define REC_SQRT2 0.7071067811865475 

/**
 * Set of input states
 */
enum input_state
{
    NOTHING_PRESSED = 0,
    UP_PRESSED = 1,
    DOWN_PRESSED = 1<<1,
    LEFT_PRESSED = 1<<2,
    RIGHT_PRESSED = 1<<3
};

/**
 * Context structure that will be passed to the loop handler
 */
struct context
{
    SDL_Renderer *renderer;

    /**
     * Rectangle that the owl texture will be rendered into
     */
    SDL_Rect dest;
    SDL_Texture *owl_tex;

    /**
     * Font that is used for rendering text, and
     * a texture the text is rendered into
     */
    TTF_Font *font;
    SDL_Texture *text_tex;

    enum input_state active_state;

    /**
     * x and y components of owl's velocity
     */
    int owl_vx;
    int owl_vy;
};

/**
 * Loads the owl texture into the context
 */
int get_owl_texture(struct context *ctx)
{
  SDL_Surface *image = IMG_Load("assets/owl.png");
  if (!image)
  {
     printf("IMG_Load: %s\n", IMG_GetError());
     return 0;
  }
  ctx->owl_tex = SDL_CreateTextureFromSurface(ctx->renderer, image);
  ctx->dest.w = image->w;
  ctx->dest.h = image->h;

  SDL_FreeSurface (image);

  return 1;
}

/**
 * Set the context's text texture to show the text 'text' 
 */
void set_font_text(struct context *ctx, const char *text)
{
	SDL_Color fg = {0,0,0,255};
    SDL_Surface *text_surface = TTF_RenderText_Blended(ctx->font, text, fg);
    ctx->text_tex = SDL_CreateTextureFromSurface(ctx->renderer, text_surface);
    SDL_FreeSurface(text_surface);
}

/**
 * Load the font we're going to use and set the text to
 * be "Hello owl!"
 */
int get_font_texture(struct context *ctx)
{
    ctx->font = TTF_OpenFont("assets/FreeSans.ttf", 30);
    set_font_text(ctx, "Hello owl!");
    return 1;
}

/**
 * Processes the input events and sets the velocity
 * of the owl accordingly
 */
void process_input(struct context *ctx)
{
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        switch (event.key.keysym.sym)
        {
            case SDLK_UP:
                if (event.key.type == SDL_KEYDOWN)
                    ctx->active_state |= UP_PRESSED;
                else if (event.key.type == SDL_KEYUP)
                    ctx->active_state ^= UP_PRESSED;
                break;
            case SDLK_DOWN:
                if (event.key.type == SDL_KEYDOWN)
                    ctx->active_state |= DOWN_PRESSED;
                else if (event.key.type == SDL_KEYUP)
                    ctx->active_state ^= DOWN_PRESSED;
                break;
            case SDLK_LEFT:
                if (event.key.type == SDL_KEYDOWN)
                    ctx->active_state |= LEFT_PRESSED;
                else if (event.key.type == SDL_KEYUP)
                    ctx->active_state ^= LEFT_PRESSED;
                break;
            case SDLK_RIGHT:
                if (event.key.type == SDL_KEYDOWN)
                    ctx->active_state |= RIGHT_PRESSED;
                else if (event.key.type == SDL_KEYUP)
                    ctx->active_state ^= RIGHT_PRESSED;
                break;
            default:
                break;
        }
    }

    ctx->owl_vy = 0;
    ctx->owl_vx = 0;
    if (ctx->active_state & UP_PRESSED)
        ctx->owl_vy = -5;
    if (ctx->active_state & DOWN_PRESSED)
        ctx->owl_vy = 5;
    if (ctx->active_state & LEFT_PRESSED)
        ctx->owl_vx = -5;
    if (ctx->active_state & RIGHT_PRESSED)
        ctx->owl_vx = 5;

    if (ctx->owl_vx != 0 && ctx->owl_vy != 0)
    {
        ctx->owl_vx *= REC_SQRT2;
        ctx->owl_vy *= REC_SQRT2;
    }
}

/**
 * Loop handler that gets called each animation frame,
 * process the input, update the position of the owl and 
 * then render the texture
 */
void loop_handler(void *arg)
{
    struct context *ctx = arg;

    int vx = 0;
    int vy = 0;
    process_input(ctx);

    ctx->dest.x += ctx->owl_vx;
    ctx->dest.y += ctx->owl_vy;

    SDL_RenderClear(ctx->renderer);
    SDL_RenderCopy(ctx->renderer, ctx->owl_tex, NULL, &ctx->dest);

    SDL_Rect text_dest = {.x = 50, .y = 175, .w = 0, .h = 0};
    SDL_QueryTexture(ctx->text_tex,
            NULL, NULL, &text_dest.w, &text_dest.h);
    SDL_RenderCopy(ctx->renderer, ctx->text_tex, NULL, &text_dest);

    SDL_RenderPresent(ctx->renderer);
}

int main()
{
    SDL_Window *window;
    struct context ctx;

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_CreateWindowAndRenderer(600, 400, 0, &window, &ctx.renderer);
    SDL_SetRenderDrawColor(ctx.renderer, 255, 255, 255, 255);

    get_owl_texture(&ctx);
    get_font_texture(&ctx);
    ctx.active_state = NOTHING_PRESSED;
    ctx.dest.x = 200;
    ctx.dest.y = 100;
    ctx.owl_vx = 0;
    ctx.owl_vy = 0;

    /**
     * Schedule the main loop handler to get 
     * called on each animation frame
     */
    emscripten_set_main_loop_arg(loop_handler, &ctx, -1, 1);

    return 0;
}
