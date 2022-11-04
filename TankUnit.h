#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

    #include "Node.h"
    #include "TankIterator.h"
    
    template <typename T>
    class TankUnit{
        friend class TankIterator<T>;
        public:
            TankUnit();
            void enqueue(T e);
            T dequeue();
            bool isEmpty();
            TankIterator<T> begin();
            TankIterator<T> end();
            TankIterator<T> first();
        private:
            Node<T>* head;
    };

    #include "TankUnit.cpp"
    
#endif
