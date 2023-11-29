#include <stdio.h>

// Fungsi untuk mentransposisi matriks
void transposeMatrix(int mat[10][10], int trans[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
}

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        printf("[");
        for (int j = 0; j < col; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("]\n");
    }
}

void transpose()
{
    int mat[10][10], trans[10][10];
    int row, col;

    // Input ukuran matriks
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &row);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &col);

    // Input elemen matriks
    printf("Masukkan elemen matriks:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    // Mentransposisi matriks
    transposeMatrix(mat, trans, row, col);

    // Menampilkan matriks asli
    printf("\nMatriks Asli:\n");
    displayMatrix(mat, row, col);

    // Menampilkan matriks transpos
    printf("\nMatriks Transpos:\n");
    displayMatrix(trans, col, row);

    return 0;
}
