#include "matrix.hpp"
#include <iostream>
#include <limits>

namespace CustomMatrix {
    void inputMatrix(std::vector<std::vector<int>>& mat, int& size) {
        std::cout << "Введите размер матрицы (n <= 100): ";
        std::cin >> size;
        mat.resize(size, std::vector<int>(size));
        std::cout << "Введите элементы матрицы:\n";
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                std::cin >> mat[i][j];
            }
        }
    }

    void modifyMatrix(std::vector<std::vector<int>>& mat, int size) {
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (areRowsIdentical(mat[i], mat[j])) {
                    int largestPrime = getLargestPrime(mat, size);
                    for (int col = 0; col < size; ++col) {
                        int minElement = std::numeric_limits<int>::max();
                        for (int row = 0; row < size; ++row) {
                            if (mat[row][col] < minElement) {
                                minElement = mat[row][col];
                            }
                        }
                        for (int row = 0; row < size; ++row) {
                            if (mat[row][col] == minElement) {
                                mat[row][col] = largestPrime;
                            }
                        }
                    }
                }
            }
        }
    }

    void outputMatrix(const std::vector<std::vector<int>>& mat, int size) {
        std::cout << "Результирующая матрица:\n";
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    bool areRowsIdentical(const std::vector<int>& firstRow, const std::vector<int>& secondRow) {
        return firstRow == secondRow;
    }

    int getLargestPrime(const std::vector<std::vector<int>>& mat, int size) {
        int largestPrime = -1;
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if (isNumberPrime(mat[i][j]) && mat[i][j] > largestPrime) {
                    largestPrime = mat[i][j];
                }
            }
        }
        return largestPrime;
    }

    bool isNumberPrime(int number) {
        if (number < 2) return false;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) return false;
        }
        return true;
    }
}