#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "myclass.h"

void task1(){
	// Демонстрация работы с Storage
	try {   
        std::cout << "Пример работы Storage:\n";
        Storage<int> intStorage(5);
        intStorage.add(1);
        intStorage.add(2);
        intStorage.add(2);
        intStorage.info();
        Storage<MyClass> myClassStorage(3);
        myClassStorage.add(MyClass(100));
        myClassStorage.add(MyClass(200));
        myClassStorage.info();

        myClassStorage.remove(MyClass(100));
        myClassStorage.info();
        Storage<MyClass> myClassStorage2(2);
        myClassStorage2.add(MyClass(10));
        myClassStorage2.add(MyClass(20));
        myClassStorage2.add(MyClass(30)); 
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
	}
}

void task2() {
	// Демонстрация работы с Storage2 (2-е задание)
	try { 
        std::cout << "\nПример работы Storage2:\n";
        Storage2<int> intStorage2(5);
        intStorage2.add(10);
        intStorage2.add(20);
        intStorage2.add(20);
        intStorage2.info();
        if (intStorage2.find(10)) {
            std::cout << "Найдено 10 в intStorage2.\n";
        }
        Storage2<MyClass> myClassStorage2(3);
        myClassStorage2.add(MyClass(100));
        myClassStorage2.add(MyClass(200));
        myClassStorage2.add(MyClass(200));
        myClassStorage2.info();
        if (myClassStorage2.find(MyClass(100))) {
            std::cout << "Найден MyClass(100) в myClassStorage2.\n";
        }
        Storage2<MyClass> myClassStorage3(3);
        myClassStorage3.add(MyClass(10));
        myClassStorage3.add(MyClass(10)); 
        myClassStorage3.add(MyClass(10));
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
	}
}

void task3() {
	// Демонстрация работы с Storage3 (3-е задание)
	try {
        std::cout << "\nПример работы Storage3:\n";
        Storage3<int> intStorage3(5);
        intStorage3.add(30);
        intStorage3.add(40);
        intStorage3.add(50);
        intStorage3.add(25);
        intStorage3.add(10);
        intStorage3.info();
        std::cout << "Количество элементов больше 20: " << intStorage3.countGreaterThan(20) << "\n";
        std::cout << "Количество элементов меньше 30: " << intStorage3.countLessThan(30) << "\n";
        Storage3<MyClass> myClassStorage3(5);
        myClassStorage3.add(MyClass(30));
        myClassStorage3.add(MyClass(40));
        myClassStorage3.add(MyClass(50));
        myClassStorage3.add(MyClass(25));
        myClassStorage3.add(MyClass(10));
        myClassStorage3.info();
        

        std::cout << "Количество элементов класса MyClass больше 20: " << myClassStorage3.countGreaterThan(MyClass(20)) << "\n";
        std::cout << "Количество элементов класса MyClass меньше 30: " << myClassStorage3.countLessThan(MyClass(30)) << "\n";
        Storage3<MyClass> myClassStorage4(3);
        std::cout << "Количество элементов больше 20: " << myClassStorage4.countGreaterThan(MyClass(20)) << "\n";  // Исключение
        std::cout << "Количество элементов меньше 30: " << myClassStorage4.countLessThan(MyClass(30)) << "\n";  // Исключение
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
	}
}

int main() {
    task1();
    task2();
    task3();

    return 0;
}
