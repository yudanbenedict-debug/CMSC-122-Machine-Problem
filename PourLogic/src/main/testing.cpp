#include <iostream>
#include "../logic/Tube.h"
#include <stack>
#include <vector>

int pop(std::vector<std::stack<int>> &test, int index);
int main(){
    //consider 4 stacks in an array
    std::vector<std::stack<int>> board;
    Tube a(3);
    a.push('b');
    a.push('c');
    a.push('d');
    a.pop();
    std::cout << a.peek() << std::endl;

}
int pop(std::vector<std::stack<int>> &test, int index){
    if(test.at(index).empty()){
        return 0;
    }
    int temp = test.at(index).top();
    test.at(index).pop();
    return temp;
}

