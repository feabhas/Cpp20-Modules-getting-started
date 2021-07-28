// my_math.cxx
module;

#include <vector>

export module my_math;       

export namespace math {

    int add(int fir, int sec);
 
    int getProduct(const std::vector<int>& vec);

}