#include "task2.h"
#include "myclass.h"

template <typename T>
Storage2<T>::Storage2(int capacity) : capacity(capacity), size(0) {
    arr = new T[capacity];
}

template <typename T>
Storage2<T>::~Storage2() {
    delete[] arr;
}

template <typename T>
void Storage2<T>::add(const T& data) {
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

        if (count >= 1) {
            throw std::invalid_argument("Такой элемент уже есть в массиве.");
        }
    }

    arr[size++] = data;
}

template <typename T>
void Storage2<T>::remove(const T& data) {
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
void Storage2<T>::info() const {
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
bool Storage2<T>::find(const T& data) const {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == data) {
            count++;
        }
    }
    if (count > 1) {
        throw std::logic_error("Найдено больше одного элемента.");
    }
    return count == 1;
}

template <typename T>
bool Storage2<T>::contains(const T& data) const {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == data) {
            return true;
        }
    }
    return false;
}

template class Storage2<int>;
template class Storage2<std::string>;
template class Storage2<MyClass>;
