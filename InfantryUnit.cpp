
#include "InfantryUnit.h"
#include "Infantry.cpp"
#include "InfantryIterator.cpp"
#include "CombatBarracks.h"

#include <iostream>

InfantryUnit::InfantryUnit()
{
	totHP = 0;
	totDmg = 0;

	CombatBarracks bootcamp = CombatBarracks();
	int InfantryCount = 5;
	Node<FootUnit *> *n = new Node<FootUnit *>();
	n->element = bootcamp.createFootUnit();
	head = n;
	for (int i = 0; i < InfantryCount - 1; i++)
	{
		n = new Node<FootUnit *>();
		n->element = bootcamp.createFootUnit();
		n->next = head;
		head = n;
	}
	setVal();
}

InfantryUnit::~InfantryUnit()
{
	Node<FootUnit *> *n = head;
	while (n != nullptr)
	{
		Node<FootUnit *> *temp = n;
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
	Node<FootUnit *> *n = head;
	while (n->next != nullptr)
	{
		n = n->next;
	}
	return InfantryIterator(head, n);
}

bool InfantryUnit::takeDamage( int dmg ){
	totHP -= dmg;
	if ( totHP <= 0 ){
		return true;
	}
	return false;
}

void InfantryUnit::heal( int hp ){
	totHP += hp;
}