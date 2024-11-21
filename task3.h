#ifndef TASK3_H
#define TASK3_H

#include <vector>
#include <iostream>

template <typename T>
class DataStorage3 {
private:
    std::vector<T> data;

public:
    void add(const T& value);
    void remove(const T& value);
    void removeMax();
    void removeMin();
    void info() const;
};

#endif
