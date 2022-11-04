#ifndef FOOTUNIT_H
#define FOOTUNIT_H
#include
class FootUnit {
    protected: 
    int HP; 
    public:
    FootUnit();
    FootUnit(int); 
    ~FootUnit();
    int getHP(); 
};
#endif