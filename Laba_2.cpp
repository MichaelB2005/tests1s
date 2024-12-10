# include <iostream>
int main()
{
    //Второй вариант

    int h,a;
    std::cout << "Введите число больше 0: ";
    std::cin >> h;
    std::cout << "Введите число меньше 10^8: ";
    std::cin >> a;

    int result = (a * h)/2;

    std::cout << "The square of the triangle is " << result;
    return 0;
    
}