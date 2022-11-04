#ifndef _BATTALION_H
#define _BATTALION_H

#include "Node.h"
#include "Battalion.h"

template <typename T>
class Battalion{
    ////friend class MedicIterator<T>;
public:
    Battalion();
    void enqueueMedic(T e);
//    void enqueueTank(T e);
//    void enqueueSupply(T e);
//    void enqueueInfantry(T e);
    T dequeueMedic();
//    T dequeueTank();
//    T dequeueSupply();
//    T dequeueInfantry();
    int getHp();
//    int getRP();
//    int getDamage();
//    void print();

    bool isEmpty(); // check if anything has anything
private:
    Node<T>* medicHead;
    Node<T>* tankHead;
    Node<T>* supplyHead;
    Node<T>* infantryHead;

};

#include "MedicUnit.cpp"

#endif
