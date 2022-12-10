#ifndef STRING_TABLE_H_
#define STRING_TABLE_H_
#include <vector>
#include <string>

class string_table {
public:
    static string_table* get_instance();
    void insert(std::string _string);
    std::string get_string(int storage_index);
    void print();

private:
    string_table();
    static string_table* instance;
    std::vector<std::string> table;
};

#endif /* STRING_TABLE_H_ */