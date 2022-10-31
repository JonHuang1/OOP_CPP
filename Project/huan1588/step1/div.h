#ifndef DIV_H_
#define DIV_H_
#include "stmt.h"
#include <string>

class div : public stmt {
public:
    void serialize(std::string file);
    bool need_patchup();
    div();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* DIV_H_ */