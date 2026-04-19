#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user (enforce max 3)
    cout << "Enter number of rows (1-3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Error: Rows must be between 1 and 3. Please re-enter: ";
        cin >> rows;
    }

    cout << "Enter number of columns (1-3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        cout << "Error: Columns must be between 1 and 3. Please re-enter: ";
        cin >> cols;
    }

    // Dynamically allocate 2D array
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "\n--- Enter Values ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for position [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Output the values
    cout << "\n--- 2D Array Contents ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << "\t";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}