#ifndef _TankIterator_H
#define _TankIterator_H

#include "TankUnit.h"
#include "Tank.h"

class TankUnit;

class TankIterator
{
	friend class TankUnit;

public:
	TankIterator();
	Tank *operator*();
	TankIterator operator++();
	bool operator==(const TankIterator &) const;
	TankIterator(Node<Tank *> *, Node<Tank *> *);

protected:
	Node<Tank *> *head;
	Node<Tank *> *current;
};

#endif



/* #ifndef _TankIterator_H
#define _TankIterator_H

//  #include "Node.h"
//  #include "TankUnit.h"
  template <typename T>
  class TankUnit;
      
  template <typename T>
  class Node;
      
  template <typename T>
  class TankIterator {
    friend class TankUnit<T>;
    public:
      TankIterator();
      TankIterator<T> next();
      TankIterator<T> prev();
      TankIterator<T> curr();
      T& operator*();
      TankIterator<T> operator++();
      bool operator==(const TankIterator<T>&) const;
    protected:
      TankIterator(const TankUnit<T>&, Node<T>*);
      Node<T>* head;
      Node<T>* current;
  };
  
  #include "TankIterator.cpp"
  
 #endif
 */