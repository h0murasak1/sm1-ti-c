#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[10];
    int A5 = 0; // Inisialisasi jumlah angka 5 dengan 0

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);

        // Memeriksa apakah angka 5
        if (a[i] == 5)
        {
            A5++;
        }
    }

    printf("\n\n\n");

    // Menampilkan jumlah kemunculan angka 5
    printf("Jumlah Inputan 5 Ada                    : %d\n", A5);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            // Mencari angka 5 dalam array dan menampilkan indeksnya
            printf("Angka 5 ditemukan pada Array Ke-[%d]\n", i + 1);
        }
    }

    return 0;
}