#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <string>
#include <unordered_map>
#include <vector>
#include "tableentry.h"

class SymbolTable {
public:
    SymbolTable();
    void insert(std::string _name, TableEntry* _data);

    void enter_scope();
    void leave_scope();
private:
    std::vector<std::unordered_map<std::string, TableEntry*>> table;
};

#endif /* SYMBOLTABLE_H_ */