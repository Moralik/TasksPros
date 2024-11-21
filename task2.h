#ifndef TASK2_H
#define TASK2_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <type_traits>
#include <stdexcept>

template <typename T>
class DataStorage2 {
private:
    std::vector<T> data;

public:
    void add(const T& value);
    void remove(const T& value);
    void info() const;
};


#endif
