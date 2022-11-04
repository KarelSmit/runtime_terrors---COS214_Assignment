#include "FootUnit.h"
#include <string>
FootUnit::FootUnit(int HP){
    this->HP = HP;    
}
FootUnit::FootUnit(string name, int HP){
    this->HP = HP;
    this->name = name;
}

FootUnit::~FootUnit() { 
    
}
FootUnit::FootUnit() {

}

int FootUnit::getHP() {
    return this->HP;
}

string FootUnit::getName() {
    return this->name;
}