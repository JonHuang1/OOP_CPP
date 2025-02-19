#ifndef PUSHARR_H_
#define PUSHARR_H_
#include "stmt.h"
#include <string>

class pusharr : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    pusharr(std::string _name);
    void patchup();
private:
    std::string to_serialize;
    bool patchup_status;
    std::string name;
};

#endif /* PUSHARR_H_ */
