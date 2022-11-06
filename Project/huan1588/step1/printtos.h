#ifndef PRINTTOS_H_
#define PRINTTOS_H_
#include "stmt.h"
#include <string>

class printtos : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    printtos();
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* PRINTTOS_H_ */