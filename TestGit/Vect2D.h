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



        Vect2D(int x = 0, int y = 0)
        {
            this->x = x;
            this->y = y;
        }

        
        void setVect2D(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        
        friend Vect2D operator+(const Vect2D &left, const Vect2D &right);
        friend Vect2D operator-(const Vect2D &left, const Vect2D &right);
        friend int operator*(const Vect2D &left, const Vect2D &right);
        friend std::ostream &operator<<(std::ostream &out, const Vect2D &right);


    };
    Vect2D operator+(const Vect2D & left, const Vect2D & right)
    {
        Vect2D result;
        result.x = left.x + right.x;
        result.y = left.y + right.y;
        
        return result;
    }

    Vect2D operator-(const Vect2D & left, const Vect2D & right)
    {
        Vect2D result;
        result.x = left.x - right.x;
        result.y = left.y - right.y;

        return result;
    }

    int operator*(const Vect2D & left, const Vect2D & right)
    {
        int result;
        result = (left.x*right.x)+(left.y*right.y);
        

        return result;
    }

    std::ostream & oss::operator<<(std::ostream & out, const Vect2D & right)
    {
        out << "x: " << right.x << " y: " << right.y;
        return out;
    }


}


