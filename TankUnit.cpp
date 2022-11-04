#ifndef _QUEUE_C
#define _QUEUE_C

    #include "Node.h"
    #include "TankUnit.h"
    #include "TankIterator.h"

    template <typename T>
    TankUnit<T>::TankUnit(){
        head = 0;
    }
    
    template <typename T>
    void TankUnit<T>::enqueue(T e){
        Node<T>* n = new Node<T>();
        n->element = e;
        if (isEmpty()) {
            n->next = n;
            n->previous = n;
        } else {
            n->next = head;
            n->previous = head->previous;
            head->previous->next = n;
            head->previous = n;
        }
        head = n;
    }
    
    template <typename T>
    T TankUnit<T>::dequeue(){
        if (isEmpty())
            return 0;
        else if (head->previous == head) {
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
    bool TankUnit<T>::isEmpty(){
        return head == 0;
    }
    
    template <typename T>
    TankIterator<T> TankUnit<T>::begin(){
        return TankIterator<T> (*this, head);
    }

    template <typename T>
    TankIterator<T> TankUnit<T>::end(){
        return TankIterator<T> (*this, head->previous);
    }

    template<typename T>
    TankIterator<T> TankUnit<T>::first(){
        return begin();
    }
   
#endif
