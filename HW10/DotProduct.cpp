#include <iostream>
#include <string>
#include "DotProduct.h"

DotProduct::DotProduct() {
    DotProduct(0);
}

DotProduct::DotProduct(int _length) : length(_length), dot_prod(0) {
    arr1 = new int[length];
    arr2 = new int[length];
    for (int i=0; i<length; i++)
    {
        arr1[i] = rand( ) % 100;
        arr2[i] = rand( ) % 100;
    }
}

void DotProduct::dot_product(int* arr1, int* arr2) {
    for(int i=0; i<length; i++)
    {
        dot_prod += arr1[i] * arr2[i];
    }
}

std::ostream& operator<<(std::ostream& os, const DotProduct dp) {

    os << "inner product on arrays of length " << dp.length << ", result is " << dp.dot_prod;
    return os;
}

void DotProduct::execute() {

}

void DotProduct::identify() {
    std::cout << 
}