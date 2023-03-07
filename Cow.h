//
// Created by Tho Tran on 3/7/23.
//

#ifndef LEARNINGCPP_COW_H
#define LEARNINGCPP_COW_H
#include <string>
enum cow_purpose {dairy, meat, hide, pet};

class Cow {
private:
    std::string name;
    int age;
    unsigned char purpose;

public:
    Cow(std::string name_i, int age_i, unsigned char purpose_i);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
};
#endif //LEARNINGCPP_COW_H
