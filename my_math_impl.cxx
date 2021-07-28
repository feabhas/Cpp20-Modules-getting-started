// my_math_impl.cxx
module;

#include <numeric>
#include <vector>

module my_math;

// import std.core;

namespace math {
    int add(int fir, int sec){
        return fir + sec;
    }

    int getProduct(const std::vector<int>& vec) {
        return std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<int>());
    }
}