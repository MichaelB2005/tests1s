#include <iostream>
using namespace std;
int main(){
    long i;
    int sum = 0;
    int rem;
    cout << "Введите число от 1 до 10^9: ";
    cin >> i;

    
    while(i > 0){
        rem = i % 10;
        sum += rem;
        i /= 10;
    }

    cout << "Сумма цифр числа: " << sum << endl;
    return 0;

    
}