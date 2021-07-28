
```
g++ -c -std=c++20 -fmodules-ts -x c++ my_math.ixx 
```
creates `\gcm.cache\my_math.gcm` and `my_math.o`

`-x c++` is required if it is a non-standard file extension (e.g. `.ixx`)
```
g++ -std=c++20 -fmodules-ts client.cpp my_math.o -o App
./App
```