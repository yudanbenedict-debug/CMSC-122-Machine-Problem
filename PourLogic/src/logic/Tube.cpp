#include "Tube.h"
#include <cstddef>
#include <cstdlib>
#include <vector>

  
  Tube::Tube(int capacity){
    this->capacity = capacity;
  }
  void Tube::push(char a){
    if(a == '\0' || isFull()){
        return;
    }
    data.push_back(a);
    return;
  }
  void Tube::pop(){
    if(isEmpty()){
        return;
    }
    data.pop_back();
    return;
  }
  char Tube::peek() const{
    if(isEmpty()){
        return '\0';
    }
    return data.at(data.size() - 1);
  }

  bool Tube::isEmpty() const{
    return data.empty();
  
  }
  
  bool Tube::isFull() const{
    if((int)data.size() == capacity){
      return true;
    }
    return false;
  }

  const std::vector<char>& Tube::getColors() const{
    return data;
  }

  int Tube::topCount() const{
    char temp = peek();
    int i = 0;
    int size = data.size();
    while(i < size && data.at(size - 1 - i) == temp){
      i++;
    }
    return i;
  }
  int Tube::freeSpace() const{
    return capacity - (int) data.size();
  }
  bool Tube::hasFreeSpace() const{
    return freeSpace() > 0;
  }
  bool Tube::isSolved() const{
    return isEmpty() || topCount() == capacity;
  }
