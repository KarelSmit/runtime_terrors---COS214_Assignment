#ifndef BattalionIterator_C
#define BattalionIterator_C

#include "BattalionIterator.h"
#include <iostream>
using namespace std;
#include "MedicIterator.h"
#include "MedicUnit.h"
#include "Node.h"

template <typename T>
BattalionIterator<T>::BattalionIterator() : head(0), current(0) {}

template <typename T>
BattalionIterator<T>::BattalionIterator(const MedicUnit<T>& source, Node<T>* p) : head(source.head), current(p){}

template <typename T>
BattalionIterator<T> BattalionIterator<T>::next(){
    this->current = this->current->next;
    return *this;
}

template <typename T>
BattalionIterator<T> BattalionIterator<T>::prev(){
    this->current = this->current->previous;
    return *this;
}

template<typename T>
BattalionIterator<T> BattalionIterator<T>::curr(){
    return *this;
}
template <typename T>
T& BattalionIterator<T>::operator*(){
    return current->element;
}

template<typename T>
BattalionIterator<T> BattalionIterator<T>::operator++(){
    if (this != nullptr)
        this->current = this->current->next;
    return *this;
}

template <typename T>
bool BattalionIterator<T>::operator==(const BattalionIterator<T>& rhs) const{
    return current == rhs.current;
}

#endif
