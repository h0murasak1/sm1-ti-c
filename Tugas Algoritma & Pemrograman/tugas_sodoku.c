#include <stdio.h>
#include <stdbool.h>

// Fungsi untuk mencetak matriks Sudoku
void printSudoku(int sudoku[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk memeriksa apakah suatu angka dapat ditempatkan pada baris dan kolom tertentu
int isSafe(int sudoku[4][4], int row, int col, int num)
{
    // Periksa baris
    for (int x = 0; x < 4; x++)
    {
        if (sudoku[row][x] == num)
        {
            return 0;
        }
    }

    // Periksa kolom
    for (int x = 0; x < 4; x++)
    {
        if (sudoku[x][col] == num)
        {
            return 0;
        }
    }

    return 1;
}

// Fungsi untuk menyelesaikan Sudoku menggunakan backtracking
int solveSudoku(int sudoku[4][4])
{
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (sudoku[row][col] == 0)
            {
                for (int num = 1; num <= 4; num++)
                {
                    if (isSafe(sudoku, row, col, num))
                    {
                        sudoku[row][col] = num;

                        if (solveSudoku(sudoku))
                        {
                            return 1;
                        }

                        sudoku[row][col] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

// Fungsi untuk memeriksa apakah matriks Sudoku valid
int isValidSudoku(int sudoku[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (sudoku[i][j] != 0 && !isSafe(sudoku, i, j, sudoku[i][j]))
            {
                return 0;
            }
        }
    }
    return 1;
}

// Fungsi untuk mengisi sel kosong pada Sudoku
void fillSudokuCell(int sudoku[4][4], int row, int col, int value)
{
    sudoku[row][col] = value;
}

// Fungsi untuk memeriksa apakah input pengguna valid
bool isValidInput(int sudoku[4][4], int row, int col, int value)
{
    // Periksa apakah angka sudah ada di baris atau kolom
    for (int i = 0; i < 4; i++)
    {
        if (sudoku[row][i] == value || sudoku[i][col] == value)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int sudoku[4][4] = {
        {1, 0, 0, 0},
        {0, 2, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 3, 0}};

    // Tampilkan Sudoku yang sudah ada
    printf("Sudoku yang sudah ada:\n");
    printSudoku(sudoku);

    int row, col, value;

    // Minta pengguna untuk mengisi sel yang kosong
    do
    {
        printf("\nMasukkan baris (0-3), kolom (0-3), dan angka (1-4) yang ingin diisi (pisahkan dengan spasi): ");
        scanf("%d %d %d", &row, &col, &value);

        // Validasi input pengguna
        if (row < 0 || row > 3 || col < 0 || col > 3 || value < 1 || value > 4 || !isValidInput(sudoku, row, col, value))
        {
            printf("Input tidak valid. Ulangi input.\n");
        }
        else
        {
            // Isi sel kosong dengan input pengguna
            fillSudokuCell(sudoku, row, col, value);

            // Tampilkan Sudoku yang telah diupdate
            printf("\nSudoku setelah diupdate:\n");
            printSudoku(sudoku);
        }
        // Validasi matriks Sudoku
        if (!isValidSudoku(sudoku))
        {
            printf("\nMatriks Sudoku tidak valid. Silakan perbaiki matriks yang sudah ada.\n");
            return 1;
        }

    } while (!isValidSudoku(sudoku));

    // Selesaikan Sudoku jika ada sel yang kosong
    if (solveSudoku(sudoku))
    {
        printf("\nSudoku setelah dipecahkan:\n");
        printSudoku(sudoku);
    }
    else
    {
        printf("\nSudoku ini tidak memiliki solusi.\n");
    }

    return 0;
}
