#ifndef ARRAY_H_
#define ARRAY_H_

class array {
public:
    array(int array_length);
    virtual int get_length();
    virtual void print_ary();
private:
    int* ary;
    int length;
};

#endif /* ARRAY_H_ */