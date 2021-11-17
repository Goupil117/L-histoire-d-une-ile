#include<stdlib.h>
#include<stdio.h>
#include<SDL.h>

void SDL_Exit_With_Error(const char *message);

int main(int argc, char *argv[])
{
	SDL_Window *ecran = NULL;
	SDL_Renderer *rendu=NULL;

	if(SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		SDL_Exit_With_Error("Iniitialisation SDL");
	}

	ecran = SDL_CreateWindow("L'histoire d'une île deserte", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

	if(ecran == NULL)
	{
		SDL_Exit_With_Error("Creation fenetre echouee");
	}

	rendu = SDL_CreateRenderer(ecran, -1, SDL_RENDERER_SOFTWARE);

	if(rendu == NULL)
	{
		SDL_Exit_With_Error("Creation rendu echoue");
	}

	SDL_DestroyRenderer(rendu);
	SDL_DestroyWindow(ecran);
	SDL_Quit();

	return EXIT_SUCCESS; //return 0
}

void SDL_Exit_With_Error(const char *message)
{
	// fichier txt pour les logs d'erreur
	fprintf(stderr, "Erreur %s : %s\n", message, SDL_GetError());
	SDL_Quit();

	exit(EXIT_FAILURE);
}

/*
	Commande pour compiler à la ligne de commande :
	Pour inclure la lib SDL : gcc src/main.c -o bin/programme -I include -L lib -lmingw32 -lSDL2main -lSDL2
*/