#include "SupplyIterator.h"

SupplyIterator::SupplyIterator()
{
	head = 0;
	current = 0;
}

TransportUnit* SupplyIterator::operator*()
{
	return current->element;
}

SupplyIterator SupplyIterator::operator++()
{
	if (this != nullptr)
	{
		this->current = this->current->next;
	}
	return *this;
}

bool SupplyIterator::operator==(const SupplyIterator &rhs) const
{
	return current == rhs.current;
}

SupplyIterator::SupplyIterator( Node<TransportUnit*>* h, Node<TransportUnit*>* p ){
	head = h;
	current = p;
}