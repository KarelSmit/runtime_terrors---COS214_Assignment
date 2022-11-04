#include "Medic.h"
Medic::Medic(int HP, int RP): FootUnit(HP) {
    this->RP = RP;
}

Medic::Medic(string name, int HP, int RP): FootUnit(HP) {
    this->name = name;
    this->RP = RP;
}

Medic::~Medic(){
    
}

Medic::Medic(){
    
}

int Medic::getRP() {
    return RP;
}

void Medic::print() {
    cout<<name<< "(" << HP << ":"<< RP<<")"<<endl;
}

Medic& Medic::operator=(const Medic& m) {
    this->RP = m.RP;
    this->HP = m.HP;
    this->name = m.name;
    return *this;
}
bool Medic::operator==(const Medic& m) {
    if  ((this->RP == m.RP) && (this->HP == m.HP) && (this->name == m.name))
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Medic& m){
    out << m.name<< "(" << m.HP << ":"<<m.RP<<")";
    return out;
}