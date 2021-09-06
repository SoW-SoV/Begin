// Begin 1.
// Дана сторона квадрата a. Найти его периметр P = 4*a.

#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << " Введите значение стороны квадрата a: ";
    int a;
    std::cin >> a;

    int p;
    p = 4 * a;
    std::cout << " Периметр квадрата равен: " << p << "." << std::endl;

    return(0);
}