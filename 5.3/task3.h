#ifndef TASK3_H
#define TASK3_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Storage3 {
private:
    T* arr;
    int size;
    int capacity;

public:
    Storage3(int capacity);
    ~Storage3();

    void add(const T& data);
    void remove(const T& data);
    void info() const;
    int countGreaterThan(const T& value) const;
    int countLessThan(const T& value) const;

private:
    bool contains(const T& data) const;
};

#endif
