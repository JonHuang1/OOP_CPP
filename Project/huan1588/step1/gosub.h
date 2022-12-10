#ifndef GOSUB_H_
#define GOSUB_H_
#include "stmt.h"
#include <string>

class gosub : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    gosub(std::string _name);
private:
    std::string to_serialize;
    bool patchup_status;
    std::string dest;
    int dest_loc;
};

#endif /* GOSUB_H_ */
