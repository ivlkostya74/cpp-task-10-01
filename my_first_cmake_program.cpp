#include <iostream>
#include <windows.h>



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::string str;
    std::cout << "������� ���:";
    std::cin >> str;
    std::cout << "������������ :" << str << std::endl;
}