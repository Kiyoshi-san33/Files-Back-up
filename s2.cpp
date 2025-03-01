#include <iostream>
using namespace std;

#define N 9 // Kích thước của bảng Sudoku

// Hàm kiểm tra số có hợp lệ tại ô (row, col) hay không
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Kiểm tra hàng
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num)
            return false;
    }

    // Kiểm tra cột
    for (int x = 0; x < N; x++) {
        if (grid[x][col] == num)
            return false;
    }

    // Kiểm tra ô 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// Hàm giải Sudoku bằng backtracking
bool solveSudoku(int grid[N][N]) {
    int row, col;
    bool isEmpty = false;

    // Tìm ô trống đầu tiên
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty)
            break;
    }

    // Nếu không còn ô trống, Sudoku đã được giải
    if (!isEmpty)
        return true;

    // Thử các số từ 1 đến 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; // Gán số vào ô trống

            if (solveSudoku(grid))
                return true;

            grid[row][col] = 0; // Quay lui nếu không giải được
        }
    }

    return false;
}

// Hàm in bảng Sudoku
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Bảng Sudoku ban đầu (0 đại diện cho ô trống)
    int grid[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(grid)) {
        cout << "Sudoku solved successfully!\n";
        printGrid(grid);
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
