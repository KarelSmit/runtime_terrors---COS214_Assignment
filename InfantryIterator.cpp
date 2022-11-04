#ifndef _MedicIterator_C
#define _MedicIterator_C

  #include <iostream>
  using namespace std;
  #include "InfantryIterator.h"
  #include "InfantryUnit.h"
  #include "Node.h"

  template <typename T>
  InfantryIterator<T>::InfantryIterator() : head(0), current(0) {}

  template <typename T>
  InfantryIterator<T>::InfantryIterator(const InfantryUnit<T>& source, Node<T>* p) : head(source.head), current(p){}


template <typename T>
InfantryIterator<T> InfantryIterator<T>::next(){
    this->current = this->current->next;
    return *this;
}

template <typename T>
InfantryIterator<T> InfantryIterator<T>::prev(){
    this->current = this->current->previous;
    return *this;
}

template<typename T>
InfantryIterator<T> InfantryIterator<T>::curr(){
    return *this;
}

  template <typename T>
  T& InfantryIterator<T>::operator*(){
      return current->element;
  }

  template<typename T>
  InfantryIterator<T> InfantryIterator<T>::operator++(){
      if (this != nullptr)
          this->current = this->current->next;
      return *this;
  }

  template <typename T>
  bool InfantryIterator<T>::operator==(const InfantryIterator<T>& rhs) const{
      return current == rhs.current;
  }
  
#endif