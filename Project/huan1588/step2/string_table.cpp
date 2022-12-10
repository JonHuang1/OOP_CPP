#include <vector>
#include <string>
#include <fstream>
#include <iostream>

#include "string_table.h"

string_table* string_table::instance = nullptr;

string_table* string_table::get_instance() 
{
    if (instance == nullptr) {
        instance = new string_table();
    }
    return instance;
}

string_table::string_table() { }


void string_table::insert(std::string _string) 
{
    table.push_back(_string);
}

std::string string_table::get_string(int storage_index) 
{
    return table.at(storage_index);
}

void string_table::print() 
{
    for (auto& i : table) {
        std::cout << i << std::endl;
    }
}