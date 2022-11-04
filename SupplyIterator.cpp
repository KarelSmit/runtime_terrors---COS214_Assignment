#ifndef _MedicIterator_C
#define _MedicIterator_C

  #include <iostream>
  using namespace std;
  #include "SupplyIterator.h"
  #include "SupplyUnit.h"
  #include "Node.h"

  template <typename T>
  SupplyIterator<T>::SupplyIterator() : head(0), current(0) {}

  template <typename T>
  SupplyIterator<T>::SupplyIterator(const SupplyUnit<T>& source, Node<T>* p) : head(source.head), current(p){}

  template <typename T>
  T& SupplyIterator<T>::operator*(){
      return current->element;
  }

  template<typename T>
  SupplyIterator<T> SupplyIterator<T>::operator++(){
      if (this != nullptr)
          this->current = this->current->next;
      return *this;
  }

  template <typename T>
  bool SupplyIterator<T>::operator==(const SupplyIterator<T>& rhs) const{
      return current == rhs.current;
  }
  
#endif
