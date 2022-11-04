#include "Medic.h"
Medic::Medic(int HP, int RP): FootUnit(HP) {
    this->RP = RP;
}

Medic::~Medic(){
    
}

int Medic::getRP() {
    this-> RP;
}

void Medic::print() {
    cout<<name<< "(" << hp << ":"<< rp<<")"<<endl;
}

Medic& Medic::operator=(const Medic& m) {
    this->rp = m.rp;
    this->hp = m.hp;
    this->name = m.name;
    return *this;
}
bool Medic::operator==(const Medic& m) {
    if  ((this->rp == m.rp) && (this->hp == m.hp) && (this->name == m.name))
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Supply& m){
    out << m.name<< "(" << m.hp << ":"<<m.rp<<")";
    return out;
}