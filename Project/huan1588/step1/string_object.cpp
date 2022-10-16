#include <iostream>
#include <string>
#include "string_object.h"

string_object::string_object(std::string _str) {
    str = _str;
}

void string_object::get_string() {
    std::cout << str << std::endl;
}