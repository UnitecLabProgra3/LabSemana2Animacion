#include "Personaje.h"

Personaje::Personaje(int x,int y)
{
    this->x=x;
    this->y=y;
    this->moviendose=false;
    sprites.push_back(IMG_Load("personaje/01.png"));
    sprites.push_back(IMG_Load("personaje/02.png"));
    sprites.push_back(IMG_Load("personaje/03.png"));
    sprites.push_back(IMG_Load("personaje/04.png"));
}

Personaje::~Personaje()
{
    //dtor
}
