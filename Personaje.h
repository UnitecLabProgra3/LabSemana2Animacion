#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>
#include <vector>

class Personaje
{
    public:
        int x,y;
        bool moviendose;
        std::vector<SDL_Surface*>sprites;
        Personaje(int x,int y);
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
