#include <iostream>
#include "array.h"

array::array(int array_length) {
    ary = new int[array_length];
    length = array_length;
}

int array::get_length() {
    return length;
}

void array::print_ary() {
    for (int i=0; i<length; i++)
    {
        std::cout << ary[i] << ", ";
    }
    std::cout << std::endl;
}