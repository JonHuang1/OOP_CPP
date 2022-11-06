#include <unordered_map>
#include <string>
#include <iostream>

#include "symboltable.h"
#include "tableentry.h"


SymbolTable::SymbolTable()
{ 

}

void SymbolTable::insert(std::string _name, TableEntry* _data) {
    
    if (table.back().count(_name) == 1)
    {
        //ERROR, you redeclared an var w/ same name in scope
    }
    table.back()[_name] = _data;
}

void SymbolTable::enter_scope() {
    table.push_back(std::unordered_map<std::string, TableEntry*>{});
}

void SymbolTable::leave_scope() {
    table.pop_back();

}