#include "Tube.h"
#include <cstddef>
#include <vector>

  
  Tube::Tube(int capacity){
    this->capacity = capacity;
  }
  void Tube::push(char a){
    if(a == '\0' || size >= capacity){
        return;
    }
    data.push_back(a);
    size++;
  }
  void Tube::pop(){
    if(data.empty()){
        return;
    }
    data.pop_back();
    size--;
  }
  const char Tube::peek(){
    if(data.empty()){
        return '\0';
    }
    return data.at(data.size() - 1);
  }
