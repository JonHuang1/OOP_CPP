#ifndef DERIVED_H_
#define DERIVED_H_
#include "Base.h"

class Derived : public Base {
public:
   virtual void f1( );
   virtual void f2( );
   virtual void f3( );
   virtual void f6( );
   virtual void f4( );
   virtual void foo1( );
private:
   void f5( );
};
#endif /* DERIVED_H_ */
