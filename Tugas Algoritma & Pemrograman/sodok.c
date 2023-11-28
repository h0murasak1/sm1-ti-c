#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 9

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 0) {
                printf(" %2d ", board[i][j]);
            } else {
                printf(" _ ");
            }
            if ((j + 1) % 3 == 0 && j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if ((i + 1) % 3 == 0 && i < SIZE - 1) {
            printf("-----|-----|-----\n");
        }
    }
    printf("\n");
}

bool isSafe(int board[SIZE][SIZE], int row, int col, int num) {
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num || board[x][col] == num) {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= SIZE; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;

                        if (solveSudoku(board)) {
                            return true;
                        }

                        board[row][col] = 0;
                    }
                }

                return false;
            }
        }
    }

    return true;
}

void generateBoard(int board[SIZE][SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }
    solveSudoku(board);

    // Remove some numbers to make it a puzzle
    int removeCount = rand() % 15 + 20; // Adjust the difficulty by changing the range
    for (int i = 0; i < removeCount; i++) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;
        while (board[row][col] == 0) {
            row = rand() % SIZE;
            col = rand() % SIZE;
        }
        board[row][col] = 0;
    }
}

int main() {
    int sudokuBoard[SIZE][SIZE] = {0};

    generateBoard(sudokuBoard);

    printf("Selamat datang di Game Sudoku!\n");
    printf("Isilah kotak-kotak kosong dengan angka 1-9.\n");
    printf("Gunakan 0 untuk kotak yang masih kosong.\n\n");

    while (!solveSudoku(sudokuBoard)) {
        generateBoard(sudokuBoard);
    }

    printBoard(sudokuBoard);

    return 0;
}
