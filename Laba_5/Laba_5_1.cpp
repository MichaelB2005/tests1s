#include <iostream>
using namespace std;
// Вариант 2
int main(){
    float sum = 0;
    float start = -7;
    float max_N = start;
    int max_In = 0;
    
    
      for (float i = start;  i < 20;i++){
        sum += i;
        if (i > max_N){
            max_N = i;
            max_In = i - start + 1;
        }
        
      }

    
       
    cout << "Сумма чисел отрезка [-7;19]: " << sum << endl;
    cout << "Наибольшее число отрезка [-7;19]: " << max_N << endl;
    cout << "Порядковый номер наибольшего числа: " << max_In << endl;
    return 0;
  



}

