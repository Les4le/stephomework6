// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Спеціалізації для потрібних типів
template <typename T>
void printTypeNameI (const T& type) {
    cout << "Тип: " << typeid(type).name() << endl;
}


// функция преобразования числа в символ (по индексу крч)
void printCharFromInt(int num) {
    char* ch = reinterpret_cast<char*>(&num);
    cout << "Символ: " << *ch << endl;
}

// дальше просто вызовы функций, переменные и так далее.

int main() {
    int a = 10;
    double b = 3.14;
    char c = 'X';
    string s = "Hello";


    printTypeNameI(s);

    return 0;
}

//int main() {
//    int x = 65; // 'A'
//    printCharFromInt(x);
//
//    int y = 66; // 'B'
//    printCharFromInt(y);
//
//    return 0;
//}
