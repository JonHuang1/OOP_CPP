#ifndef LABEL_H_
#define LABEL_H_
#include "stmt.h"
#include <string>

class label : public stmt {
public:
    void serialize(std::ofstream& savefile);
    bool need_patchup();
    label(std::string _name, int _location, std::ofstream& savefile);
private:
    std::string to_serialize;
    bool patchup_status;
};

#endif /* POP_H_ */
