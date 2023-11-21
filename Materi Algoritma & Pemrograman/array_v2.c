#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[10];
    int angka = 0; // Inisialisasi angka dengan 0
    float rtrt;

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
        angka += a[i]; 
    }

    printf("\n\n\n");
    for (i = 0; i < n; i++) 
    {
        printf("Angka ke-[%d] Adalah : %d\n", i + 1, a[i]);
    }

    rtrt = (float)angka / n; // Ubah angka menjadi float untuk menghindari

    printf("Rata Rata Nilai Adalah : %.2f", rtrt);

    return 0;
}
