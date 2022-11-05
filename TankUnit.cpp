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
	Node<TransportUnit*> *n = new Node<TransportUnit*>();
	n->element = bootcamp.createTransportUnit();
	head = n;	
	for (int i = 0; i < TankCount - 1; i++)
	{
		n = new Node<TransportUnit*>();
		n->element = bootcamp.createTransportUnit();
		n->next = head;
		head = n;
	}
	setVal();
}

TankUnit::~TankUnit()
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
	Node<TransportUnit*> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return TankIterator(head, n);
}

bool TankUnit::takeDamage( int dmg ){
	totHP -= dmg;
	if ( totHP <= 0 ){
		return true;
	}
	return false;
}

void TankUnit::heal( int hp ){
	totHP += hp;
}