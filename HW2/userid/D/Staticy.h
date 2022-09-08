#ifndef STATICY_H_
#define STATICY_H_

class Staticy {
private:
    static int count;
    Staticy(int i);  

public:
    static Staticy* makeStaticy(int i);
    static int get_value( );
};

#endif /* STATICY_H_ */