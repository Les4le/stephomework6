// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Загальний шаблон
template <typename T>
void printTypeName(const T&) {
    cout << "Невідомий тип" << endl;
}

// Спеціалізації для потрібних типів
template <>
void printTypeName<int>(const int&) {
    cout << "Тип: int" << endl;
}

// double 
template <>
void printTypeName<double>(const double&) {
    cout << "Тип: double" << endl;
}

// char
template <>
void printTypeName<char>(const char&) {
    cout << "Тип: char" << endl;
}

// string
template <>
void printTypeName<string>(const string&) {
    cout << "Тип: string" << endl;
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

    printTypeName(a);
    printTypeName(b);
    printTypeName(c);
    printTypeName(s);

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
