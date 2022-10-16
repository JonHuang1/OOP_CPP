#include <iostream>
#include "ToyDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"
#include "LaysToyEggs.h"

ToyDuck::ToyDuck( ) {
    flyBehavior = new FlyNoWay( );
    quackBehavior = new Quack( );
    eggBehavior = new LaysToyEggs( );
}

void ToyDuck::display( ) {
    std::cout << "I'm a toy duck." << std::endl;
}