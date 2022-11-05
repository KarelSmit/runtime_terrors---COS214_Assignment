#include "TankUnit.h"
#include "Tank.cpp"
#include "TankIterator.cpp"
#include "CombatBarracks.h"


#include <iostream>

TankUnit::TankUnit()
{
	totHP = 0;
	totDmg = 0;
	CombatBarracks bootcamp = CombatBarracks();
	int TankCount = 5;
	Node<Tank*> *n = new Node<Tank*>();
	n->element = bootcamp.createTransportUnit();
	head = n;	
	for (int i = 0; i < TankCount - 1; i++)
	{
		n = new Node<Tank*>();
		n->element = bootcamp.createTransportUnit();
		n->next = head;
		head = n;
	}
	setVal();
}

TankUnit::~TankUnit()
{
	Node<Tank*> *n = head;
	while (n != nullptr)
	{
		Node<Tank*> *temp = n;
		n = n->next;
		delete temp->element;
		delete temp;
	}
	head = nullptr;
}

void TankUnit::setVal()
{
	TankIterator n = begin();
	TankIterator last = end();
	do
	{
		totHP += (*n)->getHP();
		totDmg += (*n)->getDamage();
		++n;
	} while (!(n == last));
}

int TankUnit::getHP()
{
	return totHP;
}

int TankUnit::getDmg()
{
	return totDmg;
}

int TankUnit::getRP()
{
	return 0;
}

TankIterator TankUnit::begin()
{
	return TankIterator(head, head);
}

TankIterator TankUnit::end()
{
	Node<Tank*> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return TankIterator(head, n);
}


/* #ifndef _QUEUE_C
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
   
#endif */
