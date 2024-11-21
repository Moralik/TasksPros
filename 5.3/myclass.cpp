#include "myclass.h"

MyClass::MyClass(int v) : value(v) {}

bool MyClass::operator==(const MyClass& other) const {
    return value == other.value;
}

bool MyClass::operator<(const MyClass& other) const {
    return value < other.value;
}

bool MyClass::operator>(const MyClass& other) const {
    return value > other.value;
}

std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
    os << obj.value;
    return os;
}
