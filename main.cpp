#include <iostream>
#include "src/RSI.h"

//using namespace helpSpace;

int main(int argc, char **argv) {
    
    helpSpace::myTest();
///////////////////////////////////   
// Task 1
    
    helpSpace::Power myPower;
    
    std::cout << myPower.calculatePower() << std::endl;
    
    helpSpace::Power myPower1(3,5);
    
    std::cout << myPower1.calculatePower() << std::endl;
///////////////////////////////////
// Task 2
    
    helpSpace::RGBA rgba1;
    
    rgba1.printRGBA(rgba1);
    
    helpSpace::RGBA rgba2(127, 255, 55, 100);
    
    rgba2.printRGBA(rgba2);
    
///////////////////////////////////
// Task 3

helpSpace::Stack stack;
stack.reset();
stack.printStack();

stack.push(3);
stack.push(7);
stack.push(5);
stack.printStack();

stack.pop();
stack.printStack();

stack.pop();
stack.pop();
stack.printStack();    
    
    return 0;
}
