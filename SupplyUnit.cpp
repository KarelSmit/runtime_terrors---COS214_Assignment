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

bool SupplyUnit::takeDamage( int dmg ){
	totHP -= dmg;
	if ( totHP <= 0 ){
		return true;
	}
	return false;
}

void SupplyUnit::heal( int hp ){
	totHP += hp;
}