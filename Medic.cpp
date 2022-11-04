#include "Medic.h"
Medic::Medic(int HP, int RP): FootUnit(HP) {
    this->RP = RP;
}

Medic::~Medic(){
    
}

int Medic::getRP() {
    this-> RP;
}

void Supply::print() {
    cout<<name<< "(" << hp << ":"<< rp<<")"<<endl;
}

Supply& Supply::operator=(const Supply& m) {
    this->rp = m.rp;
    this->hp = m.hp;
    this->name = m.name;
    return *this;
}
bool Supply::operator==(const Supply& m) {
    if  ((this->rp == m.rp) && (this->hp == m.hp) && (this->name == m.name))
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Supply& m){
    out << m.name<< "(" << m.hp << ":"<<m.rp<<")";
    return out;
}