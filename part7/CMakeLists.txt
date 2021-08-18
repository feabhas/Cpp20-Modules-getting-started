cmake_minimum_required(VERSION 3.16)
project(cpp20-modules LANGUAGES C CXX)

add_compile_options(
    -std=c++20 
    -fmodules-ts 
)

# order is important
add_executable(Application 
    func.cxx
    func_impl.cxx
    main.cpp
)