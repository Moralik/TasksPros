#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "myclass.h"

void task1() {
	// Пример для DataStorage (Task1)
    std::cout << "Пример 1: DataStorage (Task1)" << std::endl;
    DataStorage<int> storage1;
    storage1.add(10);
    storage1.add(20);
    storage1.add(10);
    storage1.add(5);
    storage1.info();

    DataStorage<MyClass> storage2;
    storage2.add(MyClass(1));
    storage2.add(MyClass(2));
    storage2.add(MyClass(1));
    storage2.add(MyClass(3));
    storage2.info();
}

void task2() {
	// Пример для DataStorage2 (Task2)
    std::cout << "\nПример 2: DataStorage2 (Task2)" << std::endl;
    DataStorage2<int> storage3;
    storage3.add(10);
    storage3.add(15);
    storage3.add(30);
    storage3.add(70);
    storage3.info();
	DataStorage2<MyClass> storage4;
    storage4.add(MyClass(10));
    storage4.add(MyClass(15));
    storage4.add(MyClass(30)); 
    storage4.add(MyClass(70)); 
    storage4.info();
    
}

void task3 () {
	// Пример для DataStorage3 (Task3)
    std::cout << "\nПример 3: DataStorage3 (Task3)" << std::endl;
    DataStorage3<int> storage5;
    storage5.add(5);
    storage5.add(10);
    storage5.add(3);
    storage5.add(7);
    storage5.info();
    storage5.removeMax();
    storage5.info();
    storage5.removeMin();
    storage5.info();

    DataStorage3<MyClass> storage6;
    storage6.add(MyClass(5));
    storage6.add(MyClass(10));
    storage6.add(MyClass(2));
    storage6.add(MyClass(7));
    storage6.info();
    storage6.removeMax();
    storage6.info();
    storage6.removeMin();
    storage6.info();
}

int main() {
    task1();
    task2();
    task3();

    return 0;
}
