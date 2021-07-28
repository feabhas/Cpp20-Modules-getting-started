## Basic build

```
g++ -c -std=c++20 -fmodules-ts my_math.cxx 
```
creates `\gcm.cache\my_math.gcm` and `my_math.o`

```
g++ -std=c++20 -fmodules-ts client.cpp my_math.o -o App
./App
```
## Using CMake
```
cmake . -B build
cmake --build build/
./build/Application 
```

## Alternative extensions
cl.exe (Microsoft) uses the required extension ixx. The ixx stands for a module interface source.

In GCC, these files would need to be build using the line:
```
g++ -c -std=c++20 -fmodules-ts -x c++ my_math.ixx 
```
`-x c++` is required if it is a non-standard file extension (e.g. `.ixx`)