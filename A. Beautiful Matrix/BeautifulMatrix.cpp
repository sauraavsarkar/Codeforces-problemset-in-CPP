#include <iostream>
#include <cstdlib> // for abs function
using namespace std;

int main() {
    int matrix[5][5];
    int r, c; // to store the position of '1'

    // Read the matrix
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }

    // Calculate minimum moves
    int row_moves = abs(r - 2); // because index is 0-based, we need to move r to 2
    int col_moves = abs(c - 2); // similarly, move c to 2

    // Output the result
    cout << (row_moves + col_moves) << endl;

    return 0;
}
