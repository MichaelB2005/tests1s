#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Определите размерность матрицы: ";
    cin >> n >> m; 

    int A[100][100]; 

    cout << "Заполните матрицу числами: "; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            cin >> A[i][j];
        }
    }

    int minSum = 0; 
    int minCol = 0; // Индекс столбца с минимальной суммой

    
    for (int i = 0; i < n; i++) {
        minSum += A[i][0]; // Суммируем элементы первого столбца
    }

    // Поиск столбца с наименьшей суммой
    for (int j = 1; j < m; j++) { // Начинаем со второго столбца
        int currentSum = 0; 
        for (int i = 0; i < n; i++) {
            currentSum += A[i][j]; // Суммируем элементы текущего столбца
        }
        
        
        if (currentSum < minSum) {
            minSum = currentSum; // Обновляем минимальную сумму
            minCol = j;
            }
        
    }

    // Увеличение всех элементов найденного столбца на 3
    for (int i = 0; i < n; i++) {
        A[i][minCol] += 3;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}