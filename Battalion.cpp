#ifndef _BETALLION_C
#define _BETALLION_C

#include "Node.h"
#include "Battalion.h"
#include "BattalionIterator.h"



Battalion<T>::Battalion(){
   head = 0;
}

void Battalion::enqueue(T e){
    Node<T>* n = new Node<T>();
    n->element = e;
    if (isEmpty()) {
        n->next = n;
        n->previous = n;
    } else {
        n->next = head;
        n->previous = medicHead->previous;
        medicHead->previous->next = n;
        medicHead->previous = n;
    }
    head = n;
}


T Battalion::dequeue(){
    if (isEmpty())
        return 0;
    else if (Head->previous == head) {
        Node<T> *tmp= head;
        head = 0;
        return tmp->element;
    } else {
        Node<T> *tmp = head->previous;
        head->previous = head->previous->previous;
        head->previous->next = head;
        return tmp->element;
    }
}

template <typename T>
bool Battalion<T>::isEmpty(){
    return head == 0;
}

template <typename T>
BattalionIterator<T> Betallion<T>::begin(){
    return BetallionIterator<T> (*this, head);
}

template <typename T>
BetallionIterator<T> Betallion<T>::end(){
    return BetallionIterator<T> (*this, head->previous);
}


template<typename T>
BetallionIterator<T> BetallionUnit<T>::first(){
    return begin();
}


#endif
