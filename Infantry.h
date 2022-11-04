#ifndef INFANTRY_H
#define INFANTRY_H
#include "FootUnit.h"
#include <string>
class Infantry : public FootUnit{
    private: 
    int Damage; 
    public:
    Infantry();
    Infantry(int, int);
    Infantry(string,int,int);
    virtual ~Infantry();
    int getDamage();
    void print();
    Infantry& operator=(const Infantry& m);
    bool operator==(const Infantry& m);
    friend std::ostream& operator<<(std::ostream& out, const Infantry& m);
};
#endif