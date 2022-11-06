#ifndef DIV_H_
#define DIV_H_
#include "stmt.h"
#include <string>

class Div : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    Div();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* DIV_H_ */