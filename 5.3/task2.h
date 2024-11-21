#ifndef TASK2_H
#define TASK2_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Storage2 {
private:
    T* arr;
    int size;
    int capacity;

public:
    Storage2(int capacity);
    ~Storage2();

    void add(const T& data);
    void remove(const T& data);
    void info() const;
    bool find(const T& data) const;

private:
    bool contains(const T& data) const;
};

#endif
