#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[10];
    int sum = 0; // Inisialisasi sum dengan 0
    float rtrt;

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) // Ubah indeks mulai dari 0
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i]; // Tambahkan nilai ke sum di sini
    }

    printf("\n\n\n");
    for (i = 0; i < n; i++) // Ubah indeks mulai dari 0
    {
        printf("Angka ke-[%d] Adalah : %d\n", i + 1, a[i]);
    }

    rtrt = (float)sum / n; // Ubah sum menjadi float untuk menghindari pembagian integer

    printf("Rata Rata Nilai Adalah : %.2f\n", rtrt);

    return 0;
}
