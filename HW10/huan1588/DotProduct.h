#include <iostream>
#include <string>
#include "Command.h"

class DotProduct: public Command {
private:
    double dot_prod;
    int length;
    double* arr1;
    double* arr2;
    void dot_product();

public:
    DotProduct( );
    DotProduct(int _length);
    virtual void execute();
    virtual void identify();

   friend std::ostream& operator<<(std::ostream& os, const DotProduct dp);
};