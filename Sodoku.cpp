#include <iostream>
#include <vector>
using namespace std;

bool isValidNumber(int n) {
    return n >= 1 && n <= 9;
}

bool isValidPlacement(const vector<vector<int>> &board, int n, int row, int col) {
    // Check row
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == n) {
            return false;
        }
    }

    // Check column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == n) {
            return false;
        }
    }

    // Check 3x3 subgrid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[startRow + i][startCol + j] == n) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    vector<vector<int>> board(9, vector<int>(9));
    cout << "Enter the Sudoku board (9x9), use 0 for empty cells:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    int n, i, j;
    cout << "Enter the number to place (n): ";
    cin >> n;

    if (!isValidNumber(n)) {
        cout << "Invalid number." << endl;
        return 0;
    }

    cout << "Enter the position (i, j) as row and column (1-based indexing): ";
    cin >> i >> j;

    // Convert to 0-based indexing
    int row = i - 1;
    int col = j - 1;

    if (row < 0 || row >= 9 || col < 0 || col >= 9) {
        cout << "Invalid position." << endl;
        return 0;
    }

    if (board[row][col] != 0) {
        cout << "Position already filled." << endl;
        return 0;
    }

    if (isValidPlacement(board, n, row, col)) {
        cout << "Valid place." << endl;
    } else {
        cout << "Invalid place." << endl;
    }

    return 0;
}
