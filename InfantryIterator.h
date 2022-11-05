#ifndef _InfantryIterator_H
#define _InfantryIterator_H

#include "InfantryUnit.h"
#include "Infantry.h"

class InfantryUnit;

class InfantryIterator
{
	friend class InfantryUnit;

public:
	InfantryIterator();
	FootUnit *operator*();
	InfantryIterator operator++();
	bool operator==(const InfantryIterator &) const;
	InfantryIterator(Node<FootUnit *> *, Node<FootUnit *> *);

protected:
	Node<FootUnit *> *head;
	Node<FootUnit *> *current;
};

#endif



/* #ifndef _InfantryIterator_H
#define _InfantryIterator_H

//  #include "Node.h"
//  #include "InfantryUnit.h"
  template <typename T>
  class InfantryUnit;
      
  template <typename T>
  class Node;
      
  template <typename T>
  class InfantryIterator {
    friend class InfantryUnit<T>;
    public:
      InfantryIterator();
      InfantryIterator<T> prev();
      InfantryIterator<T> next();
      InfantryIterator<T> curr();

      T& operator*();
      InfantryIterator<T> operator++();
      bool operator==(const InfantryIterator<T>&) const;
    protected:
      InfantryIterator(const InfantryUnit<T>&, Node<T>*);
      Node<T>* head;
      Node<T>* current;
  };
  
  #include "InfantryIterator.cpp"
  
 #endif */
