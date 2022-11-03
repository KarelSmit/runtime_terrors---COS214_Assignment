#include "Infantry.h"
Infantry::Infantry(int HP, int Damage): FootUnit(HP) {
    this->Damage = Damage;
}

Infantry::~Infantry(){
    
}

int Infantry::getDamage() {
    return this->Damage; 
}