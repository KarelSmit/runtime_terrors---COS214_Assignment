#ifndef _MedicIterator_H
#define _MedicIterator_H

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
