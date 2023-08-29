#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to find the number of non-zero elements in a matrix
int countNonZeroElements(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != 0)
                count++;
        }
    }
    return count;
}

// Function to display the upper triangular matrix
void displayUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    cout << "Upper Triangular Matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j >= i)
                cout << matrix[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

// Function to display the elements just above and below the main diagonal
void displayAboveBelowDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    cout << "Elements above and below the main diagonal:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == i - 1 || j == i + 1)
                cout << matrix[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Find the number of non-zero elements
    int nonZeroCount = countNonZeroElements(matrix, size);
    cout << "Number of non-zero elements: " << nonZeroCount << endl;

    // Display the upper triangular matrix
    displayUpperTriangular(matrix, size);

    // Display the elements above and below the main diagonal
    displayAboveBelowDiagonal(matrix, size);

    return 0;
}