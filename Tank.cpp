#include "Tank.h"
Tank::Tank(){

}

Tank::Tank(string name) {
    name = "T-" + name;
    this->name = name;
}

Tank::~Tank() {
    
}

void Tank::print() {
    cout<<name<<endl;
}

Tank& Tank::operator=(const Tank& m) {
    this->name = m.name;
    return *this;
}
bool Tank::operator==(const Tank& m) {
    if  (this->name == m.name)
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream& out, const Tank& m){
    out << m.name;
    return out;
}