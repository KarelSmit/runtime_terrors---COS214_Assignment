#ifndef _BATTALION_H
#define _BATTALION_H

#include "Node.h"
#include "Battalion.h"
#include "Medic.h"
#include "MedicUnit.h"


class Battalion{
    ////friend class MedicIterator<T>;
public:
    Battalion();
    void enqueueMedic(MedicUnit<MedicUnit> e);
//    void enqueueTank(T e);
//    void enqueueSupply(T e);
//    void enqueueInfantry(T e);
    Medic dequeueMedic();
//    T dequeueTank();
//    T dequeueSupply();
//    T dequeueInfantry();
    int getHP();
//    int getRP();
//    int getDamage();
//    void print();

    bool isEmpty(); // check if anything has anything
private:
    Node<MedicUnit<T>>* medicHead;
//    Node<T>* tankHead;
//    Node<T>* supplyHead;
//    Node<T>* infantryHead;

};

#include "MedicUnit.cpp"

#endif
