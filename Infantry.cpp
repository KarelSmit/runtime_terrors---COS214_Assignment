#include "Infantry.h"
#include <string>
Infantry::Infantry(int HP, int Damage): FootUnit(HP) {
	this->name = "Infantry";
    this->Damage = Damage;
}

Infantry::Infantry(string name, int HP, int Damage): FootUnit(name, HP) {
    this->Damage = Damage;
}

Infantry::Infantry(){

}

Infantry::~Infantry(){
    
}

int Infantry::getDamage() {
    return this->Damage; 
}

void Infantry::print() {
    cout <<name<<  "(" << HP << ":"<< Damage<<")"<<endl;
}

Infantry& Infantry::operator=(const Infantry& m) {
    this->Damage = m.Damage;
    this->HP = m.HP;
    this->name = m.name;
    return *this;
}
bool Infantry::operator==(const Infantry& m) {
    if  ((this->Damage == m.Damage) && (this->HP == m.HP) && (this->name == m.name))
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Infantry& m){
    out << m.name<< "(" << m.HP << ":"<<m.Damage<<")";
    return out;
}