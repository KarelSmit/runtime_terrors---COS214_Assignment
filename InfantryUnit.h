#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

    #include "Node.h"
    #include "InfantryIterator.h"
    
    template <typename T>
    class InfantryUnit{
        friend class InfantryIterator<T>;
        public:
            InfantryUnit();
            void enqueue(T e);
            T dequeue();
            bool isEmpty();
            InfantryIterator<T> begin();
            InfantryIterator<T> end();
            InfantryIterator<T> first();
        private:
            Node<T>* head;
    };

    #include "InfantryUnit.cpp"
    
#endif
