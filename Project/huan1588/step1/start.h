#ifndef START_H_
#define START_H_
#include "stmt.h"
#include <string>

class start : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patch();
    start();
private:
    int var_count;
    std::string to_serialize;
    bool patchup_status;
};

#endif /* START_H_ */
