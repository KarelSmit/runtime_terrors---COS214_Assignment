#ifndef _TankIterator_C
#define _TankIterator_C

  #include <iostream>
  using namespace std;
  #include "TankIterator.h"
  #include "TankUnit.h"
  #include "Node.h"

  template <typename T>
  TankIterator<T>::TankIterator() : head(0), current(0) {}

  template <typename T>
  TankIterator<T>::TankIterator(const TankUnit<T>& source, Node<T>* p) : head(source.head), current(p){}

template <typename T>
TankIterator<T> TankIterator<T>::next(){
    this->current = this->current->next;
    return *this;
}

template <typename T>
TankIterator<T> TankIterator<T>::prev(){
    this->current = this->current->previous;
    return *this;
}

template<typename T>
TankIterator<T> TankIterator<T>::curr(){
    return *this;
}
  template <typename T>
  T& TankIterator<T>::operator*(){
      return current->element;
  }

  template<typename T>
  TankIterator<T> TankIterator<T>::operator++(){
      if (this != nullptr)
          this->current = this->current->next;
      return *this;
  }

  template <typename T>
  bool TankIterator<T>::operator==(const TankIterator<T>& rhs) const{
      return current == rhs.current;
  }
  
#endif
