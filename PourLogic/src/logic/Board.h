#pragma once
#include "Tube.h"
#include <vector>
#include <string>

class Board{
    private:
    std::vector<Tube> tubes;
    //changeable.
    int numberOfTubes;
    
    public:
    Board(int capacity);
    //int will be used as the index of the tubes.
    bool canPour(int fromTube, int toTube) const;
    void pour(int from, int to);
    //if all tubes have their top count equivalent to the capacity/size they currently have.
    bool isSolved() const;
    void print() const;

};