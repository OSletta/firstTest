#include"Vect2D.h"
#include"Vect3D.h"
#include<vector> //Container for objects


/*To add/subtract two vector, use operator +/-.
To get dot product use operator */

std::vector<oss::Vect2D> make2Dvectors()
{
    int numberOfVectors;
    oss::Vect2D newObjects;
    std::vector<oss::Vect2D> container;
    std::cout << "Enter numbers of vectors to add in database:";
    std::cin >> numberOfVectors;

    for (int n = 0; n < numberOfVectors; n++)
        container.push_back(newObjects);

    return container;


}


int main()
{
    
    
    
    
    return 0;
}