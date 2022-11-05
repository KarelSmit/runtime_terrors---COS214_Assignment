#ifndef _SUPPLYUNIT_H
#define _SUPPLYUNIT_H

#include "Node.h"
#include "SupplyIterator.h"
#include "Battalion.h"
#include "Supply.h"

class SupplyUnit : public Battalion
{
	friend class SupplyIterator;

public:
	SupplyUnit();
	~SupplyUnit();
	int getHP();
	int getDmg();
	int getRP();
	SupplyIterator begin();
	SupplyIterator end();
	void setVal();
	bool takeDamage(int);
	void heal(int);

	Node<TransportUnit*> *head;
private:
	int totHP;
};

#endif



/* #ifndef _SupplyUNIT_H
#define _SupplyUNIT_H

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
    
#endif */
