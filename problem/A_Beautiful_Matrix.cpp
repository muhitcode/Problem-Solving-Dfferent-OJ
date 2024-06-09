#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Input the matrix
    int matrix[5][5];
    int row_of_one, col_of_one;

    // Read the matrix and find the position of the number one
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }

    // Calculate the number of moves to move the one to the center row and center column
    int moves_to_center_row = abs(row_of_one - 2);
    int moves_to_center_col = abs(col_of_one - 2);

    // Calculate the total number of moves needed
    int total_moves = moves_to_center_row + moves_to_center_col;

    // Output the result
    cout << total_moves << endl;

    return 0;
}
