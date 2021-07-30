// my_math_if.cxx
module;

#include <iostream>

export module my_math2;

// export {
    // namespace X {
    //   int add2(int fir, int sec);
    // }
    //  void foo();
// }


// export namespace X {
//      int add2(int fir, int sec);
// }
// export void foo();


namespace X {
    export int add2(int fir, int sec);
}
export void foo();

void func() {
    std::cout << "func called\n";
}