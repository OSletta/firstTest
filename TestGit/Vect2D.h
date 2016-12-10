#include<iostream>
#pragma once
namespace oss
{
    class Vect2D
    {
    private:
        int x;
        int y;
    public:



        Vect2D(int x = 0, int y = 0);

        int getX();
        int getY();
        void printVect2d();
        void setVect2D(int x, int y);
        ~Vect2D();


    };
}


