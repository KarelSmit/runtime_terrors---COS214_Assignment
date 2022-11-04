#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

    #include "Node.h"
    #include "SupplyIterator.h"
    
    template <typename T>
    class SupplyUnit{
        friend class SupplyIterator<T>;
        public:
            SupplyUnit();
            void enqueue(T e);
            T dequeue();
            bool isEmpty();
            SupplyIterator<T> begin();
            SupplyIterator<T> end();
            SupplyIterator<T> first();
        private:
            Node<T>* head;
    };

    #include "SupplyUnit.cpp"
    
#endif
