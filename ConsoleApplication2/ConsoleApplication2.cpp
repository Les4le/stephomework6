// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// ��������� ������
template <typename T>
void printTypeName(const T&) {
    cout << "�������� ���" << endl;
}

// ������������ ��� �������� ����
template <>
void printTypeName<int>(const int&) {
    cout << "���: int" << endl;
}

// double 
template <>
void printTypeName<double>(const double&) {
    cout << "���: double" << endl;
}

// char
template <>
void printTypeName<char>(const char&) {
    cout << "���: char" << endl;
}

// string
template <>
void printTypeName<string>(const string&) {
    cout << "���: string" << endl;
}

// ������� �������������� ����� � ������ (�� ������� ���)
void printCharFromInt(int num) {
    char* ch = reinterpret_cast<char*>(&num);
    cout << "������: " << *ch << endl;
}

// ������ ������ ������ �������, ���������� � ��� �����.

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
