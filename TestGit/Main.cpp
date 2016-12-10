#include"Vect2D.h"
#include"Vect3D.h"



int main()
{
    oss::Vect3D a(2, 3, 4);
    oss::Vect3D b(4, 3, 2);

    oss::Vect3D result3d = a + b;
    std::cout << result3d << std::endl;

    oss::Vect2D c(9,8);
    oss::Vect2D d(8,9);

    oss::Vect2D result2d = c + d;
    std::cout << result2d << std::endl;
 
    return 0;
}