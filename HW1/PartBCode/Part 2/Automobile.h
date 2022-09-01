#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_

#include <string>


class Automobile {
private:
    int id;
    float miles;
    int prev_maint_month;
    int prev_maint_day;
    int prev_maint_year;

public:
    Automobile(int _id, float _miles, int _prev_maint_month, int _prev_maint_day, int _prev_maint_year);
    virtual int getId( );
    virtual float getMiles( );
    virtual std::string getPrev_maint_date( );
};
#endif /* AUTOMOBILE_H_ */