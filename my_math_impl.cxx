// my_math_impl.cxx
module;

#include <numeric>
#include <vector>

module my.math;  // the module name and namespace are orthoginal
// the '.' pays no part in any form of nesting, it's just an alternative to using '_'

// import std.core;

namespace math {
    int add(int fir, int sec){
        return fir + sec;
    }

    int getProduct(const std::vector<int>& vec) {
        return std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<int>());
    }
}