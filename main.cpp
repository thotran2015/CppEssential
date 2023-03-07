#include <iostream>
#include <string>
#include <cstdint>
#include <cstring>
#include <utility>
#include "Cow.h"

//#define CAPACITY 5000
//#define DEBUG

using namespace std;

//auto a  = 8;
//auto b = 12345678901;
//auto c = 3.14f;
//auto d = 3.14;
//auto e = true;
//const auto CAPACITY = 4000;
//
//const int n = 4;
//int age[n];
//float temperature[] = {32.5, 31.4, 5.4, 6.4};
//
//char array_char1[8] = "Hello!";
//char array_char2[] = " How are you doing?";
//string std_str1 = "Love, ";
//string std_str2 = "Tho.";
//
//int int_array[5] = {0, 0, 1,};

//enum cow_purpose {dairy, meat, hide, pet};

//struct Cow {
//    string name{"Hamlet"};
//    int age{5};
//    unsigned char purpose{meat};
//};

//class Cow {
//private:
//    string name;
//    int age;
//    unsigned char purpose;
//
//public:
//    Cow(string name_i, int age_i, unsigned char purpose_i) {
//        name = name_i;
//        age = age_i;
//        purpose = purpose_i;
//    }
//    string get_name() {
//        return name;
//    }
//    int get_age() {
//        return age;
//    }
//    unsigned char get_purpose() {
//        return purpose;
//    }
//};

int main() {
    Cow my_cow = Cow("Hildy", 7, pet);
    cout << "My cow is " << my_cow.get_name() << endl;
    cout << "My cow's age is " << my_cow.get_age() << endl;
    cout << "My cow is type-" << (int)my_cow.get_purpose() << endl;

//    cout << "My cow is " << my_cow.name << endl;
//    cout << "My cow's age is " << my_cow.age << endl;
//    cout << "My cow is type-" << (int)my_cow.purpose << endl;
    /*
    float mean = 0;
    for (int num: int_array) {
        cout << "Int val in array: " << num << endl;
        mean += num;
        cout << "Sum so far: " << mean << endl;
    };
    mean/=3;

    cout << "Mean of array elements: " << mean << endl;
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
