#include "tableentry.h"
#include <iostream>
#include <tuple>

TableEntry::TableEntry(double _location, double _length) : location(_location), length(_length) {}

// TableEntry::TableEntry() : location(-1), length(-1) {}

double TableEntry::get_location() {
    return location;
}