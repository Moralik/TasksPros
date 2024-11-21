#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class MyClass {
private:
    int value;

public:
	MyClass(int val);
    
	int val() const;
    bool operator==(const MyClass& other) const;
    bool operator>(const MyClass& other) const;
    bool operator<(const MyClass& other) const;
    bool operator<=(const MyClass& other) const;
    MyClass operator*(int factor) const;

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
};

#endif
