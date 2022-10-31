#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <string>

class SymbolTable{
public:
    SymbolTable(std::string _label, int _location, int _length);
private:
    std::string label;
    int location;
    int length;
};
#endif 
