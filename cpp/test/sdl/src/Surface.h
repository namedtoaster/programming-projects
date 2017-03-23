#ifndef SURFACE_H
#define SURFACE_H
 
#include <SDL.h>
#include <SDL_ttf.h>
 
class Surface {
 public:
  Surface();
 
 public:
  static SDL_Surface* OnLoad(char* File);
  static SDL_Surface* OnLoad(TTF_Font* font, char* text, SDL_Color color);
  
  static bool OnDraw(SDL_Renderer* sdlRenderer, SDL_Texture* tex_draw,
		     int X, int Y, int W, int H);
  static bool OnDraw(SDL_Window* Window_Dest,SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src,
		     int X, int Y, int X2, int Y2, int W, int H);
  static bool Transparent(SDL_Surface* Surf_Dest, int R, int G, int B);
};
 
#endif
