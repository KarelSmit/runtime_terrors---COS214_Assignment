
#include "InfantryUnit.h"
#include "Infantry.cpp"
#include "InfantryIterator.cpp"

#include <iostream>

InfantryUnit::InfantryUnit()
{
	totHP = 0;
	totDmg = 0;
	int hp = 10;
	int dmg = 20;
	int InfantryCount = 5;
	Node<Infantry*> *n = new Node<Infantry*>();
	n->element = new Infantry(hp, dmg);
	head = n;	
	for (int i = 0; i < InfantryCount - 1; i++)
	{
		n = new Node<Infantry*>();
		n->element = new Infantry(hp, dmg);
		n->next = head;
		head = n;
	}
	setVal();
}

InfantryUnit::~InfantryUnit()
{
	Node<Infantry*> *n = head;
	while (n != nullptr)
	{
		Node<Infantry*> *temp = n;
		n = n->next;
		delete temp->element;
		delete temp;
	}
	head = nullptr;
}

void InfantryUnit::setVal()
{
	InfantryIterator n = begin();
	InfantryIterator last = end();
	do
	{
		totHP += (*n)->getHP();
		totDmg += (*n)->getDamage();
		++n;
	} while (!(n == last));
}

int InfantryUnit::getHP()
{
	return totHP;
}

int InfantryUnit::getDmg()
{
	return totDmg;
}

int InfantryUnit::getRP()
{
	return 0;
}

InfantryIterator InfantryUnit::begin()
{
	return InfantryIterator(head, head);
}

InfantryIterator InfantryUnit::end()
{
	Node<Infantry*> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return InfantryIterator(head, n);
}
/* #ifndef _QUEUE_C
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
   
#endif */
