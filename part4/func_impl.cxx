// func_impl.cxx
module;

#include <iostream>

module mod;

namespace X {
    void func() {
        std::cout << "hello, world!\n";
    }

    void func(int p) {
        std::cout << "hello, " << p << '\n';
    }
}