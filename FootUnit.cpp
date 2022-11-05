
#include "FootUnit.h"
FootUnit::FootUnit(int HP){
    this->HP = HP;    
}

FootUnit::~FootUnit() { 
    
}

int FootUnit::getHP() {
    return this->HP;
}