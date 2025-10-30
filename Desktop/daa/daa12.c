#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

int count = 0;

bool is_safe(int board[MAX][MAX], int row, int col, int n) {
    int i, j;

    // Check column
    for (i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    }

    // Check upper-left diagonal
    for (i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }

    // Check upper-right diagonal
    for (i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1)
            return false;
    }

    return true;
}

void solve(int board[MAX][MAX], int row, int n) {
    if (row == n) {
        count++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row][col] = 1;
            solve(board, row + 1, n);
            board[row][col] = 0; // backtrack
        }
    }
}

int nQueen(int n) {
    int board[MAX][MAX] = {0};
    count = 0;
    solve(board, 0, n);
    return count;
}
int main() {
    int n;
    scanf("%d", &n);

    if (n < 2 || n > 10) {
        printf("0\n");
        return 0;
    }

    printf("%d\n", nQueen(n));
    return 0;
}

