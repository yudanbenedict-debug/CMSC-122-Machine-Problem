#pragma once
#include <vector>
#include <string>

class Tube{
    private:
    std::vector<char> data;
    int capacity;
    public:
    Tube(int capacity);
    void push(char a);
    void pop();
    char peek() const;
    bool isEmpty() const;
    bool isFull() const;
    const std::vector<char>& getColors() const;
    int topCount() const;
    int freeSpace() const;
    bool hasFreeSpace() const;
    bool isSolved() const;
};