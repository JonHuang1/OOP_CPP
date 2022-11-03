#include <iostream>
#include <string>
#include <mutex>
#include "DotProduct.h"

DotProduct::DotProduct() {
    DotProduct(0);
}

DotProduct::DotProduct(int _length) : length(_length), dot_prod(0) {
    arr1 = new double[length];
    arr2 = new double[length];
    for (int i=0; i<length; i++)
    {
        arr1[i] = rand( );
        arr2[i] = rand( );
    }
}

void DotProduct::dot_product() {
    for(int i=0; i<length; i++)
    {
        dot_prod += arr1[i] * arr2[i];
    }
}

std::ostream& operator<<(std::ostream& os, const DotProduct dp) {

    os << "inner product on arrays of length " << dp.length \
    << ", result is " << dp.dot_prod;
    os << "\n\n";
    return os;
}

void DotProduct::execute() {
    this->dot_product();
}

void DotProduct::identify() {
    std::cout << *this;
}