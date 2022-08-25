#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_

#include <string>


class Automobile {
private:
    std::string id;
    int miles;
    std::string prev_maint_date;

public:
    Automobile(std::string _id, std::string miles, std::string prev_maint_date);
    std::string toString();
};

#endif /* AUTOMOBILE_H_ */