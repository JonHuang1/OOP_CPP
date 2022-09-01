#include <iostream>
#include "Automobile.h"

int main(int argc, char* argv[ ]) {
    Automobile* automobile1 = new Automobile(1234567, 100000, 2, 2, 2022);
    Automobile* automobile2 = new Automobile(42069, 10000, 8, 23, 2002);
    std::cout << "Vehicle ID: "+std::to_string(automobile1->getId( ))+"\nMiles driven: "+std::to_string(automobile1->getMiles( ))+"\nLast maintanence date: "+automobile1->getPrev_maint_date( ) + "\n"<< std::endl;
    std::cout << "Vehicle ID: "+std::to_string(automobile2->getId( ))+"\nMiles driven: "+std::to_string(automobile2->getMiles( ))+"\nLast maintanence date: "+automobile2->getPrev_maint_date( ) + "\n"<< std::endl;
}