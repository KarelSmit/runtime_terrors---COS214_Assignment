

#ifndef _BATTALIONITERATOR_H
#define _BATTALIONITERATOR_H

//  #include "Node.h"
    #include "Battalion.h"
//    #include "BattalionIterator.h"

template <typename T>
class Battalion;

template <typename T>
class Node;

template <typename T>
class BattalionIterator{
    friend class Battalion<T>;
public:
    BattalionIterator();
    BattalionIterator<T> prev();
    BattalionIterator<T> next();
    BattalionIterator<T> curr();

    T& operator*();
    BattalionIterator<T> operator++();
    bool operator==(const BattalionIterator<T>&) const;
protected:
    BattalionIterator(const BattalionIterator<T>&, Node<T>*);
    Node<T>* head;
    Node<T>* current;
};



#endif
