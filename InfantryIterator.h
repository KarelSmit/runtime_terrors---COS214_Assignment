#ifndef _MedicIterator_H
#define _MedicIterator_H

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
  
 #endif
