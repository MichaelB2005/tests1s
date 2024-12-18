#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>

namespace CustomMatrix {
    void inputMatrix(std::vector<std::vector<int>>& mat, int& size);
    void modifyMatrix(std::vector<std::vector<int>>& mat, int size);
    void outputMatrix(const std::vector<std::vector<int>>& mat, int size);
    bool areRowsIdentical(const std::vector<int>& firstRow, const std::vector<int>& secondRow);
    int getLargestPrime(const std::vector<std::vector<int>>& mat, int size);
    bool isNumberPrime(int number);
}

#endif // MATRIX_HPP