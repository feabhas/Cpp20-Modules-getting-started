// client.cpp

#include <iostream>
#include <vector>

import my.math;
import speech;

int main() {
    
    std::cout << '\n';   
   
    std::cout << "add(2000, 21): " << math::add(2000, 21) << '\n';

   auto [val, message] = math::sum_t(2000, 11);
    std::cout << "math::sum_t(2000, 11): " << val << "; type: " << message << '\n';
    
    auto [val1, message1] =  math::sum_t(2013.5, 0.5);
    std::cout << "math::sum_t(2013.5, 0.5): " << val1 << "; type: " << message1 << '\n';
    
    auto [val2, message2] =  math::sum_t(2017, false);
    std::cout << "math::sum_t(2017, false): " << val2 << "; type: " << message2 << '\n';


    std::vector myVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    std::cout << "getProduct(myVec): " << math::getProduct(myVec) << '\n';
    
    std::cout << '\n';

   std::cout << get_phrase_en() << '\n';
   std::cout << get_phrase_es() << '\n';
   
}