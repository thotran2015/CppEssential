//
// Created by Tho Tran on 3/7/23.
//
#include "Cow.h"

Cow::Cow(std::string name_i, int age_i, unsigned char purpose_i) {
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string Cow::get_name() {
    return name;
}
int Cow::get_age() {
    return age;
}
unsigned char Cow::get_purpose() {
    return purpose;
}
