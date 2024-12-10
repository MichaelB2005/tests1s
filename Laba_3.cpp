#include <iostream>
using namespace std;
//вариант 2
int main(){
    unsigned int x;
    cout << "Введите значение x(Н-р, 29): ";
    int i;
    cin >> x;
    cout << "Введите значение i(Н-р, 3): ";
    cin >> i;
    x = x & ~(1 << i);
    cout << "Result: " << x;
    return 0;
}



