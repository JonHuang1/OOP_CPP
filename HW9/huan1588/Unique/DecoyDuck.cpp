#include <iostream>
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"
#include <memory>

DecoyDuck::DecoyDuck( ) {
   flyBehavior = std::make_unique<FlyNoWay>( );
   quackBehavior = std::make_unique<MuteQuack>( );
}

void DecoyDuck::display( ) {
   std::cout << "I’m a decoy duck" << std::endl;
}
