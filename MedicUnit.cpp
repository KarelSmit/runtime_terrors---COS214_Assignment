#ifndef _QUEUE_C
#define _QUEUE_C

    #include "Node.h"
    #include "MedicUnit.h"
    #include "MedicIterator.h"

    template <typename T>
    MedicUnit<T>::MedicUnit(){
        head = 0;
    }
    
    template <typename T>
    void MedicUnit<T>::enqueue(T e){
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
    T MedicUnit<T>::dequeue(){
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
    bool MedicUnit<T>::isEmpty(){
        return head == 0;
    }
    
    template <typename T>
    MedicIterator<T> MedicUnit<T>::begin(){
        return MedicIterator<T> (*this, head);
    }

    template <typename T>
    MedicIterator<T> MedicUnit<T>::end(){
        return MedicIterator<T> (*this, head->previous);
    }
   
#endif
