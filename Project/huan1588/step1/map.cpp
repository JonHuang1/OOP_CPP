#include <map>

#include "map.h"

void map::insert(std::string label, SymbolTable* _data) 
{
   map.insert(std::make_pair(label, _data));
}

SymbolTable* map::lookUp(std::string label) {

   if(map.find(label) != map.end())
      return map[label];
   else
      return nullptr;

}
