#ifndef DECLSCAL_H_
#define DECLSCAL_H_
#include "stmt.h"
#include <string>

class declscal : public stmt {
public:
    declscal(std::string _name, int pos);
    void insert_to_symbol_table();
    void serialize();
private:
    std::string name;
};

#endif /* DECLSCAL_H_ */
