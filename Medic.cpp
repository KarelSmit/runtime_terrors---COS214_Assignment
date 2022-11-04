#include "Medic.h"
Medic::Medic(int HP, int RP): FootUnit(HP) {
    this->RP = RP;
}

Medic::~Medic(){
    
}

int Medic::getRP() {
    this-> RP;
}