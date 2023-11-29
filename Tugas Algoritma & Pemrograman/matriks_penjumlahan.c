#include <stdio.h>

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk menambahkan dua matriks
void addMatrix(int mat1[10][10], int mat2[10][10], int result[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void penjumlahan()
{
    int mat1[10][10], mat2[10][10], result[10][10];
    int row1, col1, row2, col2;

    // Input ukuran matriks pertama
    printf("Masukkan jumlah baris matriks Ke-1: ");
    scanf("%d", &row1);
    printf("Masukkan jumlah kolom matriks Ke-1: ");
    scanf("%d", &col1);

    // Input ukuran matriks kedua
    printf("Masukkan jumlah baris matriks Ke-2: ");
    scanf("%d", &row2);
    printf("Masukkan jumlah kolom matriks Ke-2: ");
    scanf("%d", &col2);

    // Pastikan ukuran matriks kedua sesuai untuk penjumlahan
    if (row1 != row2 || col1 != col2)
    {
        printf("Ukuran matriks tidak sesuai untuk penjumlahan.\n");
        return 1;
    }

    // Input elemen matriks pertama
    printf("Masukkan elemen matriks pertama:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elemen matriks kedua
    printf("Masukkan elemen matriks kedua:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Menambahkan dua matriks
    addMatrix(mat1, mat2, result, row1, col1);

    // Menampilkan matriks pertama
    printf("\nMatriks Pertama:\n");
    displayMatrix(mat1, row1, col1);

    printf("\n+\n");

    // Menampilkan matriks kedua
    printf("\nMatriks Kedua:\n");
    displayMatrix(mat2, row2, col2);

    printf("\n=\n");

    // Menampilkan hasil penjumlahan matriks
    printf("\nHasil Penjumlahan Matriks:\n");
    displayMatrix(result, row1, col1);

    return 0;
}
