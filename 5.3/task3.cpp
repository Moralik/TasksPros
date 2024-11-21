#include "task3.h"
#include "myclass.h"

template <typename T>
Storage3<T>::Storage3(int capacity) : capacity(capacity), size(0) {
    arr = new T[capacity];
}

template <typename T>
Storage3<T>::~Storage3() {
    delete[] arr;
}

template <typename T>
void Storage3<T>::add(const T& data) {
    if (size == capacity) {
        throw std::overflow_error("Массив полон.");
    }

    if (contains(data)) {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == data) {
                count++;
            }
        }
    }

    arr[size++] = data;
}

template <typename T>
void Storage3<T>::remove(const T& data) {
    if (size == 0) {
        throw std::underflow_error("Массив пуст.");
    }

    for (int i = 0; i < size; ++i) {
        if (arr[i] == data) {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            return;
        }
    }
    throw std::invalid_argument("Элемент не найден.");
}

template <typename T>
void Storage3<T>::info() const {
    if (size == 0) {
        std::cout << "Массив пуст.\n";
        return;
    }

    std::cout << "Содержание массива: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

template <typename T>
int Storage3<T>::countGreaterThan(const T& value) const {
    if (size == 0) {
        throw std::underflow_error("Массив пуст.");
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > value) {
            count++;
        }
    }
    return count;
}

template <typename T>
int Storage3<T>::countLessThan(const T& value) const {
    if (size == 0) {
        throw std::underflow_error("Массив пуст.");
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < value) {
            count++;
        }
    }
    return count;
}

template <typename T>
bool Storage3<T>::contains(const T& data) const {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == data) {
            return true;
        }
    }
    return false;
}

template class Storage3<int>;
template class Storage3<std::string>;
template class Storage3<MyClass>;