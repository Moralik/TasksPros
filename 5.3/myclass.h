#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v);  
    MyClass() : value(0) {}  

    bool operator==(const MyClass& other) const;
    bool operator<(const MyClass& other) const;  
    bool operator>(const MyClass& other) const;  

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
};

#endif
