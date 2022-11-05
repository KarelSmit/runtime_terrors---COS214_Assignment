#include "MedicIterator.h"

MedicIterator::MedicIterator()
{
	head = 0;
	current = 0;
}

FootUnit* MedicIterator::operator*()
{
	return current->element;
}

MedicIterator MedicIterator::operator++()
{
	if (this != nullptr)
	{
		this->current = this->current->next;
	}
	return *this;
}

bool MedicIterator::operator==(const MedicIterator &rhs) const
{
	return current == rhs.current;
}

MedicIterator::MedicIterator( Node<FootUnit*>* h, Node<FootUnit*>* p ){
	head = h;
	current = p;
}