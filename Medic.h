//
// Created by matthew on 2022/10/31.
//

#ifndef MEDIC_H
#define MEDIC_H
#include <iostream>

class Medic {
private:
    int rp;
    int hp;
    int name;
public:
    void print();
    Medic();
    Medic(int hp, int rp, int name);

//  ***** need to include a =operator method *****, i%
    Medic& operator=(const Medic& m);
    bool operator==(const Medic& m);
    friend std::ostream& operator<<(std::ostream& out, const Medic& m);


};


#endif

