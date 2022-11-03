#ifndef TRANSPORTUNIT_H
#define TRANSPORTUNIT_H
class TransportUnit {
    protected: 
    int HP; 
    public:
    TransportUnit(int); 
    virtual ~TransportUnit();
    int getHP();
    
};
#endif