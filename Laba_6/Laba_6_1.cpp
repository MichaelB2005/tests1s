#include <iostream>

using namespace std;
// вариант 2
int main(){
     
     const int MAX_SIZE = 10000;
    int n;
    int numbers[MAX_SIZE];

    
    cout << "Введите количество элементов (n <= 10000): ";
    cin >> n;

    
    cout << "Введите элементы последовательности: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Сортировка по последней цифре
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Получаем последние цифры
            int lastNum1 = numbers[j] % 10;
            int lastNum2 = numbers[j + 1] % 10;

            // Сравниваем последние цифры
            if (lastNum1 < lastNum2) {
                // Меняем местами
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    
    cout << "Отсортированная последовательность: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    

    return 0;
     
}