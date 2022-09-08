#include "Staticy.h"

int Staticy::count = 0;

Staticy::Staticy(int i) {
    if(i % 2 == 0) {
        count++;
    }
}

Staticy* Staticy::makeStaticy(int i) {
    Staticy(i);
}

int Staticy::get_value( ) {
    return count;
}