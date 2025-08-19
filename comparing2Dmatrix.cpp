#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[50][50];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    if (rows >= 2) {
        cout << "\nComparing first row to second row:\n";
        for (int j = 0; j < cols; j++) {
            if (matrix[0][j] == matrix[1][j]) {
                cout << "Column " << j << ": Equal (" << matrix[0][j] << ")\n";
            } else {
                cout << "Column " << j << ": Not Equal (" 
                     << matrix[0][j] << " & " << matrix[1][j] << ")\n";
            }
        }
    } else {
        cout << "Matrix must have at least 2 rows to compare";
    }

    return 0;
}