//
// Created by matthew on 2022/10/31.
//

#include "Medic.h"
#include <iostream>

using namespace std;

Medic::Medic(){
    this->rp = 10;
    this->hp = 15;
    this->name = 20;

}

Medic::Medic(int hp, int rp, int name){
    this->rp = rp;
    this->hp = hp;
    this->name = name;

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

std::ostream& operator<<(std::ostream& out, const Medic& m){
    out << m.name<< "(" << m.hp << ":"<<m.rp<<")";
    return out;
}