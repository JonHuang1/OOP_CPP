#ifndef STRING_BUFFER_H_
#define STRING_BUFFER_H_
#include <vector>
#include <string>

class string_buffer {
public:
    string_buffer();
    void insert(std::string _string);
    std::string get_string(int storage_index);
    int get_index();

private:
    std::vector<std::string> buffer;
    int index;
};

#endif /* STRING_BUFFER_H_ */