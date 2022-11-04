//#ifndef _MEDICUNIT_C
//#define _MEDICUNIT_C

#include "Node.h"
#include "MedicUnit.h"
#include "Medic.cpp"
#include "MedicIterator.cpp"

#include <iostream>

MedicUnit::MedicUnit()
{
	totHP = 0;
	totRP = 0;
	int hp = 10;
	int rp = 15;
	int medicCount = 5;
	Node<Medic*> *n = new Node<Medic*>();
	n->element = new Medic(hp, rp);
	head = n;	
	for (int i = 0; i < medicCount - 1; i++)
	{
		n = new Node<Medic*>();
		n->element = new Medic(hp, rp);
		n->next = head;
		head = n;
	}
	setVal();
}

MedicUnit::~MedicUnit()
{
	Node<Medic*> *n = head;
	while (n != nullptr)
	{
		Node<Medic*> *temp = n;
		n = n->next;
		delete temp->element;
		delete temp;
	}
	head = nullptr;
}

void MedicUnit::setVal()
{
	MedicIterator n = begin();
	MedicIterator last = end();
	do
	{
		totHP += (*n)->getHP();
		totRP += (*n)->getRP();
		++n;
	} while (!(n == last));
}

int MedicUnit::getHP()
{
	return totHP;
}

int MedicUnit::getDmg()
{
	return 0;
}

int MedicUnit::getRP()
{
	return totRP;
}

MedicIterator MedicUnit::begin()
{
	return MedicIterator(head, head);
}

MedicIterator MedicUnit::end()
{
	Node<Medic*> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return MedicIterator(head, n);
}

//    void MedicUnit<Medic>::enqueue(Medic e){
//        Node<T>* n = new Node<T>();
//        n->element = e;
//        if (isEmpty()) {
//            n->next = n;
//            n->previous = n;
//        } else {
//            n->next = head;
//            n->previous = head->previous;
//            head->previous->next = n;
//            head->previous = n;
//        }
//        head = n;
//    }
//
//    template <typename T>
//    T MedicUnit<T>::dequeue(){
//        if (isEmpty())
//            return 0;
//        else if (head->previous == head) {
//            Node<T> *tmp= head;
//            head = 0;
//            return tmp->element;
//        } else {
//            Node<T> *tmp = head->previous;
//            head->previous = head->previous->previous;
//            head->previous->next = head;
//            return tmp->element;
//        }
//    }

//    template <typename T>
//    bool MedicUnit<T>::isEmpty(){
//        return head == 0;
//    }

//    template <typename T>
//    MedicIterator<T> MedicUnit<T>::begin(){
//        return MedicIterator<T> (*this, head);
//    }
//
//    template <typename T>
//    MedicIterator<T> MedicUnit<T>::end(){
//        return MedicIterator<T> (*this, head->previous);
//    }
//
//    template<typename T>
//    MedicIterator<T> MedicUnit<T>::first(){
//       return begin();
//    }
//#endif
