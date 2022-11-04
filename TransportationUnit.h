#ifndef TRANSPORTUNIT_H
#define TRANSPORTUNIT_H
#include "Battalions.h"
#include <string>
class TransportUnit : public Battalion {
    public:
        TransportUnit();
    virtual ~TransportUnit();
    int getHP();
    string getName();
};
#endif

