#include "TransportUnit.h"
#include <string>
TransportUnit::TransportUnit(int HP, String name) {
    this->HP = HP;
    this->name =name;
}

TransportUnit::~TransportUnit() {
    
}

int TransportUnit::getHP() {
    return this->HP; 
}

string TransportUnit::getName() {
    return this->name;
}