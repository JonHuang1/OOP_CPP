#include <iostream>
#include <string>
#include "Command.h"

class DotProduct: public Command {
private:
    int dot_prod;
    int length;
    void dot_product(int* arr1, int* arr2);

public:
    DotProduct( );
    DotProduct(int length);
    virtual void execute();
    virtual void identify();

   friend std::ostream& operator<<(std::ostream& os, const DotProduct dp);
};