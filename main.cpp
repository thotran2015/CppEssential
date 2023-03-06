#include <iostream>
#include <string>
#include <cstdint>

//#define CAPACITY 5000
#define DEBUG

auto a  = 8;
auto b = 12345678901;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
const auto CAPACITY = 4000;

//using namespace std;

int main() {
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    std::cout << "About to perform addition" << std::endl;
#endif

    large += small;

    std::cout << "The large number is " << large << std::endl;

//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//    std::string str;
//    std::cout << "Enter your name: ";
//    std::cin >> str;
//    std::cout << "Hi " << str << std::endl;
//    std::cout << typeid(a).name() << std::endl;
//    std::cout << typeid(b).name() << std::endl;
//    std::cout << typeid(c).name() << std::endl;
//    std::cout << typeid(d).name() << std::endl;
//    std::cout << typeid(e).name() << std::endl;
    return 0;
}
