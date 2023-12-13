#include <stdio.h>

#define SIZE 4

void printSudoku(int sudoku[SIZE][SIZE])
{
    int pbt1 = 1;
    int pbt;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", sudoku[i][j]);
            /*for (pbt = i; pbt >= 3 * pbt1; pbt1++)
            {
                printf("\n");
                printf("-----|-----|-----");
                printf("\n");
            }*/
        }
        printf("\n");
    }
    printf("\n");
}

int isValidMove(int sudoku[SIZE][SIZE], int row, int col, int num)
{
    // Check if the number is not in the same row or column
    for (int i = 0; i < SIZE; i++)
    {
        if (sudoku[row][i] == num || sudoku[i][col] == num)
        {
            return 0; // False
        }
    }

    // Check if the number is not in the same 2x2 box
    int startRow = 2 * (row / 2);
    int startCol = 2 * (col / 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (sudoku[startRow + i][startCol + j] == num)
            {
                return 0; // False
            }
        }
    }

    return 1; // True
}

int isBoardFilled(int sudoku[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (sudoku[i][j] == 0)
            {
                return 0; // False
            }
        }
    }
    return 1; // True
}

int solveSudoku(int sudoku[SIZE][SIZE])
{
    int row, col;

    // Cek apakah papan Sudoku telah terisi semua
    if (isBoardFilled(sudoku))
    {
        return 1; // Sudoku telah selesai
    }

    // Temukan lokasi yang belum diisi
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            if (sudoku[row][col] == 0)
            {
                // Pengguna mengisi angka
                printf("\nMasukkan angka untuk baris %d kolom %d (1-%d): ", row + 1, col + 1, SIZE);
                scanf("%d", &sudoku[row][col]);

                if (isValidMove(sudoku, row, col, sudoku[row][col]))
                {
                    // Coba solusi
                    if (solveSudoku(sudoku))
                    {
                        return 1; // Solusi ditemukan
                    }
                    // Jika tidak valid, kembalikan ke 0 (backtrack)
                    sudoku[row][col] = 0;
                }
                else
                {
                    // Jika langkah tidak valid, kembalikan ke 0 (backtrack)
                    sudoku[row][col] = 0;
                }
            }
        }
    }

    return 0; // Tidak ada solusi yang valid untuk jalur ini
}

int main()
{
    int sudoku[SIZE][SIZE] = {
        {1, 0, 0, 0},
        {0, 3, 0, 4},
        {4, 0, 0, 3},
        {0, 2, 0, 0}

    };

    printf("Sudoku Awal:\n");
    printSudoku(sudoku);

    // Selesaikan Sudoku
    if (solveSudoku(sudoku))
    {
        printf("\nSudoku Selesai:\n");
        printSudoku(sudoku);
    }
    else
    {
        printf("Tidak ada solusi yang valid.\n");
    }

    return 0;
}
