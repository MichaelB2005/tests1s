#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;
    cout << "Введите число C: ";
    cin >> C;

    if ((A%C==0)&(B%C==0)){
        cout << (A+B)/C;
    }
    else if ((A%C==0)&(B%C!=0)){
        cout << A/C+B;
    }
    else{
        cout << A-B-C;
    }
}
