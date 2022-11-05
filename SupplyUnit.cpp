#include "SupplyUnit.h"
#include "Supply.cpp"
#include "SupplyIterator.cpp"
#include "SupportBarracks.h"

#include <iostream>

SupplyUnit::SupplyUnit()
{
	totHP = 0;
	SupportBarracks bootcamp = SupportBarracks();
	int SupplyCount = 5;
	Node<TransportUnit*> *n = new Node<TransportUnit*>();
	n->element = bootcamp.createTransportUnit();
	head = n;	
	for (int i = 0; i < SupplyCount - 1; i++)
	{
		n = new Node<TransportUnit*>();
		n->element = bootcamp.createTransportUnit();
		n->next = head;
		head = n;
	}
	setVal();
}

SupplyUnit::~SupplyUnit()
{
	Node<TransportUnit*> *n = head;
	while (n != nullptr)
	{
		Node<TransportUnit*> *temp = n;
		n = n->next;
		delete temp->element;
		delete temp;
	}
	head = nullptr;
}

void SupplyUnit::setVal()
{
	SupplyIterator n = begin();
	SupplyIterator last = end();
	do
	{
		totHP += (*n)->getHP();
		++n;
	} while (!(n == last));
}

int SupplyUnit::getHP()
{
	return totHP;
}

int SupplyUnit::getDmg()
{
	return 0;
}

int SupplyUnit::getRP()
{
	return 0;
}

SupplyIterator SupplyUnit::begin()
{
	return SupplyIterator(head, head);
}

SupplyIterator SupplyUnit::end()
{
	Node<TransportUnit*> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return SupplyIterator(head, n);
}



/*# ifndef _SUPPLYUNIT_C
#define _SUPPLYUNIT_C

    #include "Node.h"
    #include "SupplyUnit.h"
    #include "SupplyIterator.h"

    template <typename T>
    SupplyUnit<T>::SupplyUnit(){
        head = 0;
    }
    
    template <typename T>
    void SupplyUnit<T>::enqueue(T e){
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
    T SupplyUnit<T>::dequeue(){
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
    bool SupplyUnit<T>::isEmpty(){
        return head == 0;
    }
    
    template <typename T>
    SupplyIterator<T> SupplyUnit<T>::begin(){
        return SupplyIterator<T> (*this, head);
    }

    template <typename T>
    SupplyIterator<T> SupplyUnit<T>::end(){
        return SupplyIterator<T> (*this, head->previous);
    }

    template<typename T>
    SupplyIterator<T> SupplyUnit<T>::first(){
      return begin();
    }
   
#endif
 */