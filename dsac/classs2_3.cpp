#include <iostream>

const int MAX_SIZE = 100;

void sparseMatrixTo3Tuple(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int sparse[MAX_SIZE][3];
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = matrix[i][j];
                count++;
            }
        }
    }

    std::cout << "Sparse Matrix (3-Tuple Format):" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << sparse[i][0] << " " << sparse[i][1] << " " << sparse[i][2] << std::endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE] = {
        {0, 0, 0, 0},
        {0, 5, 0, 0},
        {0, 0, 0, 9},
        {0, 0, 7, 0}
    };
    int rows = 4;
    int cols = 4;

    sparseMatrixTo3Tuple(matrix, rows, cols);

    return 0;
}