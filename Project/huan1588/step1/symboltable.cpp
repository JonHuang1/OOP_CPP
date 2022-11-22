#include <unordered_map>
#include <string>
#include <iostream>
#include <fstream>

#include "symboltable.h"
#include "tableentry.h"

SymbolTable* SymbolTable::instance = nullptr;

SymbolTable* SymbolTable::get_instance() {
    if (instance == nullptr) {
        instance = new SymbolTable();
    }
    return instance;
}

SymbolTable::SymbolTable() : location(0), outer_location(0), inner_size(0), savefile(0) { 
    enter_scope();
}

TableEntry* SymbolTable::find_symbol(std::string _name) {
    if (table.front().count(_name) == 1)
    {
        return table.front()[_name];
    }
    else if (table.back().count(_name) == 1)
    {
        return table.back()[_name];
    }
    else 
    {
        std::cout << "Symbol not found" << std::endl;
        return NULL;
    }
}

void SymbolTable::insert_label(std::string _name, int _location) {
    if (table.back().count(_name) == 1)
    {
        savefile << "error: attempting to add label with name L1 twice" << std::endl;
        exit(1); 
    }
    table.back()[_name] = new TableEntry(_location, 0);
}

void SymbolTable::insert_var(std::string _name, int _length) {
    if (table.back().count(_name) == 1)
    {
        savefile << "error: attempting to add variable with name A twice" << std::endl;
        exit(1);
    }
    table.back()[_name] = new TableEntry(location, _length);
    location += _length;
}

void SymbolTable::enter_scope() {
    outer_location = location;
    table.push_back(std::unordered_map<std::string, TableEntry*>{});
}

void SymbolTable::leave_scope() {
    if(table.size() == 1)
    {
        return;
    }
    table.front().swap(table.back());
    inner_size = location - outer_location;
    location = outer_location;
}

int SymbolTable::get_size() {
    return location;
}

int SymbolTable::get_inner_size() {
    return inner_size;
}    