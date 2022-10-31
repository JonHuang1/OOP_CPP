#ifndef STMT_H_
#define STMT_H_
#include <string>

class stmt {
public:
    virtual void serialize(std::string file) = 0;
    virtual bool need_patchup() = 0;
};

#endif /* STMT_H_ */