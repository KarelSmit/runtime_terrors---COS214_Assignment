
#include "Medic.h"
Medic::Medic(int HP, int rejuventationPower): FootUnit(HP) {
    this->rejuvenationPower = rejuventationPower;
}

Medic::~Medic(){
    
}

int Medic::getrejuvenationPower() {
    this-> rejuvenationPower;
}