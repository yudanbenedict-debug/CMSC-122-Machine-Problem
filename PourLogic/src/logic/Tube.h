#pragma once
#include <vector>
#include <string>

class Tube{
    private:
    std::vector<char> data;
    int capacity;
    int size = 0;
    public:
    Tube(int capacity);
    void push(char a);
    void pop();
    const char peek();
};