#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n; 
    int A[1000]; 

    cout << "Введите сами числа: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Получаем первую цифру числа
            int firstDigitA = A[j];
            while (firstDigitA >= 10) {
                firstDigitA /= 10;
            }

            int firstDigitB = A[j + 1];
            while (firstDigitB >= 10) {
                firstDigitB /= 10;
            }

            // Вычисляем произведение цифр для A[j]
            int productA = 1;
            int tempA = A[j];
            while (tempA > 0) {
                productA *= (tempA % 10);
                tempA /= 10;
            }

            // Вычисляем произведение цифр для A[j + 1]
            int productB = 1;
            int tempB = A[j + 1];
            while (tempB > 0) {
                productB *= (tempB % 10);
                tempB /= 10;
            }

            // Сравнение по критериям
            if (firstDigitA > firstDigitB || 
                (firstDigitA == firstDigitB && productA > productB) || 
                (firstDigitA == firstDigitB && productA == productB && A[j] > A[j + 1])) {
                // Меняем местами
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    

    return 0;
}