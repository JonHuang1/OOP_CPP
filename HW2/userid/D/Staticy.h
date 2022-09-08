#ifndef STATICY_H_
#define STATICY_H_

class Staticy {
private:
    static int even_count;
    int num;
    Staticy(int i);  

public:
    static Staticy* makeStaticy(int i);
    static int getEvenCount( );
};

#endif /* STATICY_H_ */