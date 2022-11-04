#ifndef _BATTALION_H
#define _BATTALION_H

#include "Node.h"
#include "Battalion.h"
#include "Medic.h"
#include "MedicUnit.h"

template <typename T>
class Battalion{
    ////friend class MedicIterator<T>;
public:
    Battalion();
    void enqueue(T e);
//    void enqueueTank(T e);
//    void enqueueSupply(T e);
//    void enqueueInfantry(T e);
     T dequeue();
//    T dequeueTank();
//    T dequeueSupply();
//    T dequeueInfantry();
//    int getHP();
//    int getRP();
//    int getDamage();
//    void print();
//    BattalionIterator<T> begin();
//    BattalionIterator<T> first();
//    BattalionIterator<T> end();

    bool isEmpty(); // check if anything has anything
private:
    Node<T>* head;
//    Node<T>* tankHead;
//    Node<T>* supplyHead;
//    Node<T>* infantryHead;

};

#include "MedicUnit.cpp"

#endif
