#ifndef _QUEUE_C
#define _QUEUE_C

    #include "Node.h"
    #include "InfantryUnit.h"
    #include "InfantryIterator.h"

    template <typename T>
    InfantryUnit<T>::InfantryUnit(){
        head = 0;
    }
    
    template <typename T>
    void InfantryUnit<T>::enqueue(T e){
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
    T InfantryUnit<T>::dequeue(){
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
    bool InfantryUnit<T>::isEmpty(){
        return head == 0;
    }
    
    template <typename T>
    InfantryIterator<T> InfantryUnit<T>::begin(){
        return InfantryIterator<T> (*this, head);
    }

    template <typename T>
    InfantryIterator<T> InfantryUnit<T>::end(){
        return InfantryIterator<T> (*this, head->previous);
    }

    template<typename T>
    InfantryIterator<T> InfantryUnit<T>::first(){
      return begin();
    }
   
#endif
