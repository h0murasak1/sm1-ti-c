#include "matriks.h"


int berhasil;

void delay_1()
{
    usleep(1000000);
}

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

void eror()
{
    printf("\n");
    printf("Input tidak valid\n");
    delay_1();
    fflush(stdin);
    printf("Tekan Enter untuk lanjut...");
    getchar();
    clear();
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
plus:
    printf("");
    int mat1[10][10], mat2[10][10], result[10][10];
    int row1, col1, row2, col2;

    // Input ukuran matriks pertama
    printf("Masukkan jumlah baris matriks Ke-1: ");
    berhasil = scanf("%d", &row1);
    if (getchar() != '\n')
    {
        eror();
        goto plus;
    }

    printf("Masukkan jumlah kolom matriks Ke-1: ");
    berhasil = scanf("%d", &col1);
    if (getchar() != '\n')
    {
        eror();
        goto plus;
    }

    // Input ukuran matriks kedua
    printf("Masukkan jumlah baris matriks Ke-2: ");
    berhasil = scanf("%d", &row2);
    if (getchar() != '\n')
    {
        eror();
        goto plus;
    }
    printf("Masukkan jumlah kolom matriks Ke-2: ");
    berhasil = scanf("%d", &col2);
    if (getchar() != '\n')
    {
        eror();
        goto plus;
    }

    // Pastikan ukuran matriks kedua sesuai untuk penjumlahan
    if (row1 != row2 || col1 != col2)
    {
        printf("Ukuran matriks tidak sesuai untuk penjumlahan.\n");
        fflush(stdin);
        clear();
        goto plus;
    }

    // Input elemen matriks pertama
    printf("Masukkan elemen matriks pertama:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            berhasil = scanf("%d", &mat1[i][j]);
            if (getchar() != '\n')
            {
                eror();
                goto plus;
            }
        }
    }

    // Input elemen matriks kedua
    printf("Masukkan elemen matriks kedua:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            berhasil = scanf("%d", &mat2[i][j]);
            if (getchar() != '\n')
            {
                eror();
                goto plus;
            }
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
min:
    printf("");
    int mat1[10][10], mat2[10][10], result[10][10];
    int row1, col1, row2, col2;

    // Input ukuran matriks pertama
    printf("Masukkan jumlah baris matriks Ke-1: ");
    berhasil = scanf("%d", &row1);
    if (getchar() != '\n')
    {
        eror();
        goto min;
    }
    printf("Masukkan jumlah kolom matriks Ke-1: ");
    berhasil = scanf("%d", &col1);
    if (getchar() != '\n')
    {
        eror();
        goto min;
    }

    // Input ukuran matriks kedua
    printf("Masukkan jumlah baris matriks Ke-2: ");
    berhasil = scanf("%d", &row2);
    if (getchar() != '\n')
    {
        eror();
        goto min;
    }

    printf("Masukkan jumlah kolom matriks Ke-2: ");
    berhasil = scanf("%d", &col2);
    if (getchar() != '\n')
    {
        eror();
        goto min;
    }

    // Pastikan ukuran matriks kedua sesuai untuk penjumlahan
    if (row1 != row2 || col1 != col2)
    {
        printf("Ukuran matriks tidak sesuai untuk penjumlahan.\n");
        fflush(stdin);
        clear();
        goto min;
    }

    // Input elemen matriks pertama
    printf("Masukkan elemen matriks pertama:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            berhasil = scanf("%d", &mat1[i][j]);
            if (getchar() != '\n')
            {
                eror();
                goto min;
            }
        }
    }

    // Input elemen matriks kedua
    printf("Masukkan elemen matriks kedua:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            berhasil = scanf("%d", &mat2[i][j]);
            if (getchar() != '\n')
            {
                eror();
                goto min;
            }
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
trans:
    printf("");
    int mat[10][10], trans[10][10];
    int row, col;

    // Input ukuran matriks
    printf("Masukkan jumlah baris matriks: ");
    berhasil = scanf("%d", &row);
    if (getchar() != '\n')
    {
        eror();
        goto trans;
    }

    printf("Masukkan jumlah kolom matriks: ");
    berhasil = scanf("%d", &col);
    if (getchar() != '\n')
    {
        eror();
        goto trans;
    }

    // Input elemen matriks
    printf("Masukkan elemen matriks:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            berhasil = scanf("%d", &mat[i][j]);
            if (getchar() != '\n')
            {
                eror();
                goto trans;
            }
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