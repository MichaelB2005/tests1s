#include "matrix.hpp"

int main() {
    std::vector<std::vector<int>> mat;
    int size;

    CustomMatrix::inputMatrix(mat, size);
    CustomMatrix::modifyMatrix(mat, size);
    CustomMatrix::outputMatrix(mat, size);

    return 0;
}