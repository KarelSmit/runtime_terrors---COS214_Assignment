#include "TankIterator.h"

TankIterator::TankIterator()
{
	head = 0;
	current = 0;
}

TransportUnit *TankIterator::operator*()
{
	return current->element;
}

TankIterator TankIterator::operator++()
{
	if (this != nullptr)
	{
		this->current = this->current->next;
	}
	return *this;
}

bool TankIterator::operator==(const TankIterator &rhs) const
{
	return current == rhs.current;
}

TankIterator::TankIterator(Node<TransportUnit *> *h, Node<TransportUnit *> *p)
{
	head = h;
	current = p;
}