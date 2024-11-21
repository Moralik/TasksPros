#include "myclass.h"

MyClass::MyClass(int val) : value(val) {}

bool MyClass::operator==(const MyClass& other) const {
    return value == other.value;
}

bool MyClass::operator>(const MyClass& other) const {
    return value > other.value;
}

bool MyClass::operator<(const MyClass& other) const {
    return value < other.value;
}

std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
    os << obj.value;
    return os;
}

MyClass MyClass::operator*(int factor) const {
    return MyClass(value * factor);
}

bool MyClass::operator<=(const MyClass& other) const {
    return value <= other.value;
}

int MyClass::val() const {
    return value;
}