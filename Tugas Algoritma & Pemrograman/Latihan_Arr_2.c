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
    }

    printf("\n\n\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Gnp Array Ke-[%d] Adalah : %d\n", i + 1, a[i]);
        }
        else
        {
            printf("Gnj Array Ke-[%d] Adalah : %d\n", i + 1, a[i]);
        }
    }

    return 0;
}
