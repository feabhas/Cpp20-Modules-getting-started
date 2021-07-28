// client.cpp

#include <iostream>
#include <vector>

import my_math;

int main() {
    
    std::cout << '\n';   
   
    std::cout << "add(2000, 21): " << math::add(2000, 21) << '\n';
    
    std::vector myVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    std::cout << "getProduct(myVec): " << math::getProduct(myVec) << '\n';
    
    std::cout << '\n';
   
}