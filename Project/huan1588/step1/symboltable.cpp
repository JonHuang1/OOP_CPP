#include <unordered_map>
#include <string>
#include <iostream>

#include "symboltable.h"
#include "tableentry.h"

SymbolTable* SymbolTable::instance = nullptr;

SymbolTable* SymbolTable::get_instance() {
        std::cout << 1 << std::endl;

    if (instance == nullptr) {
        instance = new SymbolTable();
    }
    return instance;
}

SymbolTable::SymbolTable() : location(0), var_num(0) { 
}

TableEntry* SymbolTable::find_symbol(std::string _name) {
    return table.back()[_name];
}

void SymbolTable::insert_label(std::string _name, int _location) {
    if (table.back().count(_name) == 1)
    {
        //ERROR, you redeclared an var w/ same name in scope
    }
        std::cout << 1 << std::endl;

    table.back()[_name] = new TableEntry(0, 0);
}

void SymbolTable::insert_var(std::string _name, int _length) {
    if (table.back().count(_name) == 1)
    {

    }
    table.back()[_name] = new TableEntry(location, _length);
    location += _length;
    var_num++;
}

void SymbolTable::enter_scope() {
    table.push_back(std::unordered_map<std::string, TableEntry*>{});
}

void SymbolTable::leave_scope() {
    table.pop_back();
}

int SymbolTable::get_var_num() {
    return var_num;
}