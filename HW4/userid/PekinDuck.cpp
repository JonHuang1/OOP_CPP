#include <iostream>
#include "PekinDuck.h"
#include "Quack.h"
#include "FlysPoorly.h"
#include "LaysEggsNotBroody.h"

PekinDuck::PekinDuck( ) {
    flyBehavior = new FlysPoorly( );
    quackBehavior = new Quack( );
    eggBehavior = new LaysEggsNotBroody( );
}

void PekinDuck::display( ) {
    std::cout << "I'm a PekinDuck" << std::endl;
}