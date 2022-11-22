#ifndef POPARR_H_
#define POPARR_H_
#include "stmt.h"
#include <string>

class poparr : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    poparr(std::string _name);
    void patchup();
private:
    std::string to_serialize;
    bool patchup_status;
    std::string name;
};

#endif /* POPARR_H_ */
