#ifndef PUSHI_H_
#define PUSHI_H_
#include "stmt.h"

class pushi : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    pushi(int _integer);
private:
    int integer;
    std::string to_serialize;
    bool patchup_status;
};

#endif /* PUSHI_H_ */
