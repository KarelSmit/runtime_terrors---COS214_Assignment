#ifndef _MedicIterator_H
#define _MedicIterator_H

//  #include "Node.h"
#include "MedicUnit.h"
#include "Medic.h"

class MedicUnit;
/*
  template <typename T>
  class MedicUnit;

  template <typename T>
  class Node;
*/
// template <typename T>
class MedicIterator
{
	friend class MedicUnit;

public:
	MedicIterator();
	Medic *operator*();
	MedicIterator operator++();
	bool operator==(const MedicIterator &) const;
	MedicIterator(Node<Medic *> *, Node<Medic *> *);

protected:
	Node<Medic *> *head;
	Node<Medic *> *current;
	/*  MedicIterator<T> prev();
	  MedicIterator<T> next();
	  MedicIterator<T> curr();

	  T& operator*();
	  MedicIterator<T> operator++();
	  bool operator==(const MedicIterator<T>&) const;
	protected:
	  MedicIterator(const MedicUnit<T>&, Node<T>*);
	  Node<T>* head;
	  Node<T>* current;*/
};

//#include "MedicIterator.cpp"

#endif
