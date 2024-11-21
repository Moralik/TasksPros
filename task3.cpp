#include "task3.h"
#include "myclass.h"
#include <algorithm>

template <typename T>
void DataStorage3<T>::add(const T& value) {
    data.push_back(value);
}

template <typename T>
void DataStorage3<T>::remove(const T& value) {
    data.erase(std::remove(data.begin(), data.end(), value), data.end());
}

template <typename T>
void DataStorage3<T>::removeMax() {
    if (!data.empty()) {
        T max_value = *std::max_element(data.begin(), data.end());
        remove(max_value);
    }
}

template <typename T>
void DataStorage3<T>::removeMin() {
    if (!data.empty()) {
        T min_value = *std::min_element(data.begin(), data.end());
        remove(min_value);
    }
}

template <typename T>
void DataStorage3<T>::info() const {
    for (const auto& val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


template class DataStorage3<int>;
template class DataStorage3<std::string>;
template class DataStorage3<MyClass>;
