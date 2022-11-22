#ifndef DECLARR_H_
#define DECLARR_H_
#include "stmt.h"
#include <string>

class declarr : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    declarr(std::string _name, int _size, std::ofstream& savefile);
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* DECLARR_H_ */
