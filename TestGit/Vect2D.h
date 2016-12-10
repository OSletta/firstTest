#include<iostream>
#pragma once

class Vect2D
{

public:
    int x;
    int y;

   
    Vect2D(int x = 0, int y = 0);

    int getX();
    int getY();
    void printVect2d();
    void setVect2D(int x, int y);
    ~Vect2D();
};

