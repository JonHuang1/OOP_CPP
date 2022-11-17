#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <string>
#include <unordered_map>
#include <vector>
#include "tableentry.h"

class SymbolTable {
public:
    static SymbolTable* get_instance();
    void insert_label(std::string _name, int _location);
    void insert_var(std::string _name, int _length);
    TableEntry* find_symbol(std::string _name);

    void enter_scope();
    void leave_scope();

    int get_var_num();
private:
    SymbolTable();
    static SymbolTable* instance;
    std::vector<std::unordered_map<std::string, TableEntry*>> table;
    int location;
    int var_num;
};

#endif /* SYMBOLTABLE_H_ */