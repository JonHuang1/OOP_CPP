#include <string>
#include "Automobile.h"

Automobile::Automobile(int _id, float _miles, int _prev_maint_month, int _prev_maint_day, int _prev_maint_year){
    id = _id;
    miles = _miles;
    prev_maint_month = _prev_maint_month;
    prev_maint_day = _prev_maint_day;
    prev_maint_year = _prev_maint_year;
} 

std::string Automobile::getPrev_maint_date( ) {
    return ""+std::to_string(prev_maint_month)+"/"+std::to_string(prev_maint_day)+"/"+std::to_string(prev_maint_year);
}

int Automobile::getId( ) {
    return id;
}

float Automobile::getMiles( ) {
    return miles;
}