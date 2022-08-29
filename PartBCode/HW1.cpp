#include <iostream>
#include "Automobile.h"

int main(int argc, char* argv[ ]) {
    Automobile* automobile1 = new Automobile(1234567, 100000, 2, 2, 2022);
    Automobile* automobile2 = new Automobile(42069, 10000, 8, 23, 2002);
    std::cout << automobile1->getPrev_maint_date( ) << std::endl;
}