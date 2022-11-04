#ifndef _QUEUE_C
#define _QUEUE_C

#include "Node.h"
#include "MedicUnit.h"
#include "MedicIterator.h"
#include "Battalion.h"


Battalion::Battalion(){
    medicHead = 0;
//    tankHead =  0;
//    supplyHead = 0;
//    infantryHead = 0;
}

void Battalion::enqueueMedic(MedicUnit<MedicUnit> e){
    Node<MedicUnit>* n = new Node<MedicUnit>();
    n->element = e;
    if (isEmpty()) {
        n->next = n;
        n->previous = n;
    } else {
        n->next = medicHead;
        n->previous = medicHead->previous;
        medicHead->previous->next = n;
        medicHead->previous = n;
    }
    medicHead = n;
}


 Medic Battalion::dequeueMedic(){
    if (isEmpty())
        return 0;
    else if (medicHead->previous == medicHead) {
        Node<T> *tmp= medicHead;
        medicHead = 0;
        return tmp->element;
    } else {
        Node<T> *tmp = medicHead->previous;
        medicHead->previous = medicHead->previous->previous;
        medicHead->previous->next = medicHead;
        return tmp->element;
    }
}

template <typename T>
bool Battalion<T>::isEmpty(){
    return medicHead == 0;
}

template <typename T>
int Battalion<T>::getHp(){

}


#endif
