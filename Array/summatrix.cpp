#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    // Declare matrices
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }
    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }
    // Adding the two matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Displaying the sum of matrices
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
