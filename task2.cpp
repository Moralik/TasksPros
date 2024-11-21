#include "task2.h"
#include "myclass.h"

template <typename T>
void DataStorage2<T>::add(const T& value) {
        if constexpr (std::is_arithmetic<T>::value) {
            if (!data.empty() && value > *std::max_element(data.begin(), data.end()) * 2) {
                return;  
            }
        } else {
            if (!data.empty()) {
                
                auto max_element = std::max_element(data.begin(), data.end(), [](const T& a, const T& b) {
                    return a.val() < b.val();
                });

                if (value.val() > max_element->val() * 2) {
                    return;  
                }
            }
        }
        data.push_back(value);
    }

template <typename T>
void DataStorage2<T>::remove(const T& value) {
    data.erase(std::remove(data.begin(), data.end(), value), data.end());
}

template <typename T>
void DataStorage2<T>::info() const {
    for (const auto& elem : data) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
}
template class DataStorage2<int>;
template class DataStorage2<MyClass>;