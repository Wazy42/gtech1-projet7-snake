#pragma once
#include <stdlib.h>

class MainWindow {
public:
  MainWindow();
  ~MainWindow();
  void init(const char *name, int width, int height);
  SDL_Renderer *getRenderer();
private:
  SDL_Window *window;
  SDL_Renderer *renderer;
};

void rendererReset(SDL_Renderer* renderer);

void printRectOnRenderer(SDL_Rect rect, SDL_Renderer* renderer, int r, int g, int b);

void printImgOnRenderer(SDL_Texture* texture, SDL_Renderer* renderer, SDL_Rect pos, int angle = 0);

SDL_Texture* loadSDLImg(const char* file, SDL_Renderer* renderer);

class Playground {
public:
  Playground(SDL_Renderer* newRenderer);
  ~Playground();
  void eraseAndWalls();
private:
  SDL_Renderer* renderer;
};