#include <iostream>
using namespace std;
int main(){
    int X;
    cout << "Введите значение для X(-1 или 1): ";
    cin >> X;
    if (X == -1){
        cout << "Negative number";
    }
    else if(X == 1){
        cout << "Positive number";
    }
    else{
        cout << "Wrong number.Try again!";
    }
    return 0;


}