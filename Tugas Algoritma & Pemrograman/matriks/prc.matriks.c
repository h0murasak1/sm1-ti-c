#include "matriks.h"

void clear()
{
    printf("\033[2J\033[1;1H");
}
void delay_s()
{
    usleep(5000);
}
void garis_pe()
{
    for (int i = 0; i < 50; i++)
    {
        fflush(stdout);
        printf("=");
        delay_s();
    }
    printf("\n");
}
void delay_1()
{
    usleep(1000000);
}

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        printf("[");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("]\n");
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
}

// Fungsi untuk mengurangi dua matriks
void minMatrix(int mat1[10][10], int mat2[10][10], int result[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void pengurangan()
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
        fflush(stdin);
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

    // Mengurangi dua matriks
    minMatrix(mat1, mat2, result, row1, col1);

    // Menampilkan matriks pertama
    printf("\nMatriks Pertama:\n");
    displayMatrix(mat1, row1, col1);

    printf("\n-\n");

    // Menampilkan matriks kedua
    printf("\nMatriks Kedua:\n");
    displayMatrix(mat2, row2, col2);

    printf("\n=\n");

    // Menampilkan hasil penjumlahan matriks
    printf("\nHasil Penjumlahan Matriks:\n");
    displayMatrix(result, row1, col1);
}

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
}

void matriks(menu)
{
    switch (menu)
    {
    case 1:
        clear();
        penjumlahan();
        break;

    case 2:
        clear();
        pengurangan();
        break;

    case 3:
        clear();
        transpose();
        break;

    default:
        clear();
        printf("Pilihan Tidak Valid.\n");
        break;
    }
}