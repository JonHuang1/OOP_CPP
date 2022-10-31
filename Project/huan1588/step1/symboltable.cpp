#include <map>
#include <string>
#include "symboltable.h”
#include <iostream>

SymbolTable::SymbolTable(std::string _label, int _location, int _length) : label(_label), location(_location), length(_length) 
{ 
    
}








/*
SymbolTable::SymbolTable( ) {
    definedMap = new std::map<std::string, TableEntry>( );
    idx = 0;
}

make_shared<std::map<std::string, TableEntry>> SymbolTable::makeSymbolTable( ) { 
    if (!mapDefined) {
        mapDefined = make_shared<std::map<std::string, TableEntry>>( );
    }
    return mapDefined;
}

int SymbolTable::getData(std::string key) {
    if (!mapDefined) {
        return 69420; //error
    for (auto const& e : *definedMap) {
        if (e.first == key) {
        return e.second; 
        }
    }
}

bool putEntry(std::string key, TableEntry datum);
*/


