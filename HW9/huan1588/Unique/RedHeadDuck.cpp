#include <iostream>
#include "RedHeadDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <memory>

RedHeadDuck::RedHeadDuck( ) {
   quackBehavior = std::make_unique<Quack>( );
   flyBehavior = std::make_unique<FlyWithWings>( );
}

void RedHeadDuck::display( ) {
   std::cout << "I’m a real redheaded duck" << std::endl;
}
