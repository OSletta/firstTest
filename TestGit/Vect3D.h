#include<iostream>
#pragma once
namespace oss
{
    class Vect3D
    {
    private:
        int x;
        int y;
        int z;

    public:
        Vect3D(int x = 0, int y = 0, int z = 0)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void setVect3D(int x, int y, int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        friend Vect3D operator+(const Vect3D &left, const Vect3D &right);
        friend Vect3D operator-(const Vect3D &left, const Vect3D &right);
        friend int operator*(const Vect3D &left, const Vect3D &right);
        friend std::ostream &operator<<(std::ostream &out, const Vect3D &right);

    };
    Vect3D operator+(const Vect3D & left, const Vect3D & right)
    {
        Vect3D result;
        result.x = left.x + right.x;
        result.y = left.y + right.y;
        result.z = left.z + right.z;
        return result;
    }

    Vect3D operator-(const Vect3D & left, const Vect3D & right)
    {
        Vect3D result;
        result.x = left.x - right.x;
        result.y = left.y - right.y;
        result.z = left.z - right.z;
        return result;
    }

    int operator*(const Vect3D & left, const Vect3D & right)
    {
        int result;
        result = (left.x*right.x)+ (left.y*right.y)+ (left.z*right.z);
        
        return result;
    }

    std::ostream & oss::operator<<(std::ostream & out, const Vect3D & right)
    {
        out << "x: " << right.x << " y: " << right.y << " z: " << right.z;
        return out;
    }
}