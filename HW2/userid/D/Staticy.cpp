#include "Staticy.h"

int Staticy::even_count = 0;

Staticy::Staticy(int i) {
    int num = i;
    if(i % 2 == 0) {
        even_count++;
    }
}

Staticy* Staticy::makeStaticy(int i) {
    Staticy(i);
}

int Staticy::getEvenCount( ) {
    return even_count;
}