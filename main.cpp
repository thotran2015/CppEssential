#include <iostream>
#include <string>
#include <cstdint>
#include <cstring>

//#define CAPACITY 5000
#define DEBUG

using namespace std;

auto a  = 8;
auto b = 12345678901;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
const auto CAPACITY = 4000;

const int n = 4;
int age[n];
float temperature[] = {32.5, 31.4, 5.4, 6.4};

char array_char1[8] = "Hello!";
char array_char2[] = " How are you doing?";
string std_str1 = "Love, ";
string std_str2 = "Tho.";

int int_array[5] = {1, 23, 32, 24, 337};

int main() {
    float mean = 0;
    for (int num: int_array) {
        cout << "Int val in array: " << num << endl;
        mean += num;
        cout << "Sum so far: " << mean << endl;
    };
    mean/=5;

    cout << "Mean of array elements: " << mean << endl;




    /*
    strcat(array_char1, array_char2);
    cout << "char concat result: " << array_char1 << endl;
    cout << "str concat result: " << std_str1 + std_str2 << endl;

    for (int i=0; i<n; i++){
        age[i] = i+2;
    }
    for (int i=0; i<n; i++) {
        std::cout << "Age " << i << "th person: " << age[i] << std::endl;
    }
    for (float t:temperature) {
        std::cout << "Temp " << t << std::endl;
    }

    int32_t large = CAPACITY;
    uint8_t small = 37;

    #ifdef DEBUG
    std::cout << "About to perform addition" << std::endl;
    #endif

    large += small;

    std::cout << "The large number is " << large << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
    std::string str;
    std::cout << "Enter your name: ";
    std::cin >> str;
    std::cout << "Hi " << str << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    */
    return 0;
}
