// my_math.cxx
module;

#include <vector>
#include <typeinfo>
#include <utility>

export module my.math;       

template <typename T>                               // (2)  
auto showType(T&& t) {
    return typeid(std::forward<T>(t)).name();
}

export namespace math {                             // (3)

    int add(int fir, int sec);
 
    int getProduct(const std::vector<int>& vec);

    auto sum_t(auto lhs, auto rhs){
        auto res = lhs + rhs;
        return std::make_pair(res, showType(res));  // (1) 
    }

}