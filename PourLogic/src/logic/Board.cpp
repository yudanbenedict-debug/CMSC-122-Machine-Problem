#include "Board.h"
#include "Tube.h"
#include <vector>

    Board::Board(int capacity){
        this->numberOfTubes = capacity;
    }
    bool Board::canPour(int fromTube, int toTube) const{
        const Tube& fTube = tubes.at(fromTube);
        const Tube& tTube = tubes.at(toTube);
        return (tTube.isEmpty() || fTube.peek() == tTube.peek()) && tTube.hasFreeSpace() && !fTube.isEmpty() && (fromTube != toTube);
           
    }
    void Board::pour(int from, int to) {
        if (!canPour(from, to)) {
            return;
        }
        char color = tubes.at(from).peek();   // remember the color we started with
        while (!tubes.at(from).isEmpty()
               && tubes.at(from).peek() == color
               && !tubes.at(to).isFull()) {
            tubes.at(from).pop();
            tubes.at(to).push(color);
            return;
        }
    }
    bool Board::isSolved() const{
       //consider we store the numberofTUbes
       for(int i = 0; i < numberOfTubes; i++){
            if(!tubes.at(i).isSolved()){
                return false;
            }
       }
       return true;
    }