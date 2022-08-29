#include <string>
#include "Automobile.h"

Automobile::Automobile(int _id, float _miles, int _prev_maint_month, int _prev_maint_day, int _prev_maint_year){
    id = _id;
    miles = _miles;
    prev_maint_date = ""+std::to_string(_prev_maint_month)+"/"+std::to_string(_prev_maint_day)+"/"+std::to_string(_prev_maint_year);
} 

std::string Automobile::getPrev_maint_date( ) {
    return prev_maint_date;
}

int Automobile::getId( ) {
    return id;
}

float Automobile::getMiles( ) {
    return miles;
}

std::string Automobile::info_string( ) {
    std::string info_id = "id: "+std::to_string(id);
}