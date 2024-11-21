#include "task1.h"
#include <algorithm>
#include "myclass.h"

template <typename T>
void DataStorage<T>::add(const T& value) {
    if (std::find(data.begin(), data.end(), value) == data.end()) {
        data.push_back(value);
    }
}

template <typename T>
void DataStorage<T>::remove(const T& value) {
    data.erase(std::remove(data.begin(), data.end(), value), data.end());
}

template <typename T>
void DataStorage<T>::info() const {
    for (const auto& val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


template class DataStorage<int>;
template class DataStorage<std::string>;
template class DataStorage<MyClass>;
