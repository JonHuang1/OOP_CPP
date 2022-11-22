#ifndef STRING_BUFFER_H_
#define STRING_BUFFER_H_
#include <vector>
#include <string>

class string_buffer {
public:
    static string_buffer* get_instance();
    void insert(std::string _string);
    std::string get_string(int storage_index);
    int get_index();

private:
    string_buffer();
    static string_buffer* instance;
    std::vector<std::string> buffer;
    int index;
};

#endif /* STRING_BUFFER_H_ */