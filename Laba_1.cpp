#include <iostream>
int main()
{
    //Переменная - это коробочка, которая содержит ссылку на опеределенную информацию, которую мы в будущем можем использовать.


    //Типы данных:

    //1.Целочисленные:
    short num1 = 5;   // 2 byte / -32k до 32k
    int num2 = 10;   // 4 byte / -2В до 2В
    long num3 = 15;   // 8 byte / -2^63 до 2^63-1

    //2.Вещественные:
    float num4 = 5.6534f; // 4 byte /  точность 7-8 цифр
    double num5 = 10.2434f; // 8 byte /  точность 16-17 цифр

    //3.Символьный:
    char sym = '$'; // 1 byte / -128 до 127

    //3.Логический:
    bool isHappy = true; // 1 byte / true/false

    std::cout << "short - " << "2 byte" << " / -32k до 32k " << std::endl;
    std::cout << "int - " << "4 byte" << " / -2B до 2B " << std::endl;
    std::cout << "long - " << "8 byte" << " / -2^63 до 2^63-1 " << std::endl;
    std::cout << "float - " << "4 byte" << " / 7-8 numbers " << std::endl;
    std::cout << "double - " << "8 byte" << " / 16-17 numbers " << std::endl;
    std::cout << "char - " << "1 byte" << " / -128 до 127 " << std::endl;
    std::cout << "bool - " << "1 byte" << " / true/false " << std::endl << std::endl;



    std::cout << num1 + num2 << std::endl;
    std::cout << num3 / num1 << std::endl;
    std::cout << num3 * 10 << std::endl;
    std::cout << num4 + 2 << std::endl;
    std::cout << num4 + num3 << std::endl;
    std::cout << num5 / 4 << std::endl;
    std::cout << num5 * 10000 << std::endl;

    

    
}