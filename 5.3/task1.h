#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Storage {
private:
    T* arr;
    int size;
    int capacity;

public:
    Storage(int capacity);
    ~Storage();

    void add(const T& data);
    void remove(const T& data);
    void info() const;

private:
    bool contains(const T& data) const;
};

#endif
