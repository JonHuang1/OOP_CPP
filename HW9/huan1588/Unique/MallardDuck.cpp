#include <iostream>
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <memory>

MallardDuck::MallardDuck( ) {
   quackBehavior = std::make_unique<Quack>( );
   flyBehavior = std::make_unique<FlyWithWings>( );
}

void MallardDuck::display( ) {
   std::cout << "I’m a real mallard duck" << std::endl;
}
