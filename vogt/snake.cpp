#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) { //initialisation de la SDL
       printf("Erreur d'initialisation de la SDL : %s",SDL_GetError()); //on affiche l'erreur
       return EXIT_FAILURE; //on sort du programme pour éviter de plus gros problèmes
    }
    SDL_Quit(); //on quitte la SDL
    return 0;
}

class Fruit(){
    public:
        Fruit(int posx, int posy, char *skin[], fruit_eat)
            : x( posx ), y( posy )
        {
            fruit = rand() % char *skin[];
            fruit = rand() % field.width;
            fruit = rand() % field.height;

            this -> x = posx;
            this -> y = posy;


        }


    private:
    int x, y;
    char skin[2]= "  ";
}