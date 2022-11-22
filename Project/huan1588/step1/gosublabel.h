#ifndef GOSUBLABEL_H_
#define GOSUBLABEL_H_
#include "stmt.h"
#include <string>

class gosublabel : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    void patchup();
    gosublabel(std::string _name, std::ofstream& savefile);
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* GOSUBLABEL_H_ */
