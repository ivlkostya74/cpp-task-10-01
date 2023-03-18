#include <iostream>
#include <windows.h>



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::string str;
    std::cout << "Введите имя:";
    std::cin >> str;
    std::cout << "Здравствуйте :" << str << std::endl;
}