#ifndef STRING_OBJECT_H_
#define STRING_OBJECT_H_
#include <string>

class string_object {
public:
    string_object(std::string str);
    virtual void get_string();
private:
    std::string str;
};

#endif /* STRING_OBJECT_H_ */
