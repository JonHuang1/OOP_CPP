#include <vector>
#include <string>

#include "string_buffer.h"

string_buffer::string_buffer()
{
    index = 0;
}

void string_buffer::insert(std::string _string) {
    index++;
    buffer.push_back(_string);
}

std::string string_buffer::get_string(int storage_index) {
    return buffer.at(storage_index);
}

int string_buffer::get_index() {
    return index;
}