#include "Duck.h"
#include "RedHeadDuck.h"
#include "MallardDuck.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include <memory>
#include <iostream>
int main(int argc, char *argv[]) {
   std::unique_ptr<Duck> red = std::make_unique<RedHeadDuck>( );
   std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>( );
   std::unique_ptr<Duck> decoy = std::make_unique<DecoyDuck>( );

   red->performQuack( );
   red->performFly( );
   red->swim( );
   red->setFlyBehavior(std::make_unique<FlyNoWay>( ));
   red->performFly( );

   decoy->performFly( );
}
