#include "Vect2D.h"



Vect2D::Vect2D(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Vect2D::getX()
{
    return x;
}

int Vect2D::getY()
{
    return y;
}

void Vect2D::printVect2d()
{
    std::cout << "x: " << x << " y: " << y << std::endl;
}

void Vect2D::setVect2D(int x, int y)
{
    this->x = x;
    this->y = y;
}


Vect2D::~Vect2D()
{
}
