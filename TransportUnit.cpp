#include "TransportUnit.h"
TransportUnit::TransportUnit(int HP) {
    this->HP = HP;
}

TransportUnit::~TransportUnit() {
    
}

int TransportUnit::getHP() {
    return this->HP; 
}