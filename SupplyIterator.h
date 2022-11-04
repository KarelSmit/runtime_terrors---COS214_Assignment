#ifndef _SupplyIterator_H
#define _SupplyIterator_H

#include "SupplyUnit.h"
#include "Supply.h"

class SupplyUnit;

class SupplyIterator
{
	friend class SupplyUnit;

public:
	SupplyIterator();
	Supply *operator*();
	SupplyIterator operator++();
	bool operator==(const SupplyIterator &) const;
	SupplyIterator(Node<Supply *> *, Node<Supply *> *);

protected:
	Node<Supply *> *head;
	Node<Supply *> *current;
};

#endif

/* #ifndef _SupplyIterator_H
#define _SupplyIterator_H

//  #include "Node.h"
//  #include "SupplyUnit.h"
  template <typename T>
  class SupplyUnit;

  template <typename T>
  class Node;

  template <typename T>
  class SupplyIterator {
	friend class SupplyUnit<T>;
	public:
	  SupplyIterator();
	  SupplyIterator<T> prev();
	  SupplyIterator<T> next();
	  SupplyIterator<T> curr();

	  T& operator*();
	  SupplyIterator<T> operator++();
	  bool operator==(const SupplyIterator<T>&) const;
	protected:
	  SupplyIterator(const SupplyUnit<T>&, Node<T>*);
	  Node<T>* head;
	  Node<T>* current;
  };

  #include "SupplyIterator.cpp"

 #endif */
