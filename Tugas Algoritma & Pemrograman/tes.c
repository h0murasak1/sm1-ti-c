#include <stdio.h>

void clear()
{
    printf("\033[2J\033[1;1H");
}

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[10][10], mat2[10][10], result[10][10];
    int row, col;

    clear();
    // Input ukuran matriks pertama
    printf("Masukkan jumlah baris matriks Ke-1: ");
    scanf("%d", &row);
    printf("Masukkan jumlah kolom matriks Ke-1: ");
    scanf("%d", &col);

    // Input elemen matriks pertama
    printf("Masukkan elemen matriks pertama:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    clear();
    // Menampilkan matriks pertama
    printf("\nMatriks Pertama:\n");
    displayMatrix(mat, row, col);

    int target;
    printf("Masukkan Elemen Yang Di Cari : ");
    scanf("%d", &target);

    int ditemukan = 0;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (mat[row][col] == target)
            {
                ditemukan = 1;
                break;
            }
        }
        if (ditemukan)
        {
            break;
        }
    }

    if (ditemukan)
    {
        printf("Elemen %d Ditemukan Pada Posisi (%d, %d).\n", target, row + 1, col + 1);
    }
    else
    {
        printf("Elemen %d Tidak Di Temukan Dalam Matriks", target);
    }

    return 0;
}
