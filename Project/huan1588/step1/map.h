#ifndef MAP_H_
#define MAP_H_

#include <string>
#include <map>

#include "symboltable.h"

class map {
public:
   virtual void insert(std::string label, SymbolTable* _data);
   virtual SymbolTable* lookUp(std::string label);
private:
   // declare a std::map here that takes an int and a TwoTuple*
   std::map<int, SymbolTable*> map;
};
#endif /* MAP_H_ */
