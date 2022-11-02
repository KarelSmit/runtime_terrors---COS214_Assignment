#ifndef _MedicIterator_C
#define _MedicIterator_C

  #include <iostream>
  using namespace std;
  #include "MedicIterator.h"
  #include "MedicUnit.h"
  #include "Node.h"

  template <typename T>
  MedicIterator<T>::MedicIterator() : head(0), current(0) {}

  template <typename T>
  MedicIterator<T>::MedicIterator(const MedicUnit<T>& source, Node<T>* p) : head(source.head), current(p){}

  template <typename T>
  T& MedicIterator<T>::operator*(){
      return current->element;
  }

  template<typename T>
  MedicIterator<T> MedicIterator<T>::operator++(){
      if (this != nullptr)
          this->current = this->current->next;
      return *this;
  }

  template <typename T>
  bool MedicIterator<T>::operator==(const MedicIterator<T>& rhs) const{
      return current == rhs.current;
  }
  
#endif
