#include "InfantryIterator.h"

InfantryIterator::InfantryIterator()
{
	head = 0;
	current = 0;
}

FootUnit* InfantryIterator::operator*()
{
	return current->element;
}

InfantryIterator InfantryIterator::operator++()
{
	if (this != nullptr)
	{
		this->current = this->current->next;
	}
	return *this;
}

bool InfantryIterator::operator==(const InfantryIterator &rhs) const
{
	return current == rhs.current;
}

InfantryIterator::InfantryIterator( Node<FootUnit*>* h, Node<FootUnit*>* p ){
	head = h;
	current = p;
}