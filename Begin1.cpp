// Begin 1.
// ���� ������� �������� a. ����� ��� �������� P = 4*a.

#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << " ������� �������� ������� �������� a: ";
    int a;
    std::cin >> a;

    int p;
    p = 4 * a;
    std::cout << " �������� �������� �����: " << p << "." << std::endl;

    return(0);
}