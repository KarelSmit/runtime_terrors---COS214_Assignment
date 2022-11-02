#ifndef _MEDICUNIT_H
#define _MEDICUNIT_H

    #include "Node.h"
    #include "MedicIterator.h"
    
    template <typename T>
    class MedicUnit{
        friend class MedicIterator<T>;
        public:
            MedicUnit();
            void enqueue(T e);
            T dequeue();
            bool isEmpty();
            MedicIterator<T> begin();
            MedicIterator<T> end();
        private:
            Node<T>* head;
    };

    #include "MedicUnit.cpp"
    
#endif
