#ifndef TASK1_H
#define TASK1_H

#include <vector>
#include <iostream>

template <typename T>
class DataStorage {
private:
    std::vector<T> data;

public:
    void add(const T& value);
    void remove(const T& value);
    void info() const;
};

#endif
