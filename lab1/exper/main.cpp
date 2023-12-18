#include <cstdlib> // required for srand
#include <iostream>
#include "random_vector.h"


int main()
{
    std::srand(314159);
    // std::cout << "Thanks for viewing my code!";

    RandomVector rv(20);
    rv.print();
}