#ifndef TABLEENTRY_H_
#define TABLEENTRY_H_
#include <string>

class TableEntry{
public:
    TableEntry(double _location, double _length);
    // TableEntry();
    double get_location();
private:
    double location;
    double length;
};

#endif /* TABLEENTRY_H_ */
