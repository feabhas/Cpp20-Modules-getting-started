// main.cpp

// these need to be before the import statement
#include <string_view>
#include <iostream>

import mod;

class Ethernet {
// protected:
public:
  Ethernet() = default;
  Ethernet(int x){ x=x;}
  void openConnection() {};
  void closeConnection() {};
  void send(std::string_view str) { std::cout << "Ethernet::Send: " << str << '\n';};
  std::string_view receive() { return "Ethernet::Receive\n"; };
};

auto fn(Network auto p){
  p.send("str2");
}


int main(){
    func();
    func(42);

    S s{10};
    func(s);

    auto nw = make_network<Ethernet>(10);
    fn(nw);

}