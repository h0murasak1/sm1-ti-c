#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a[10];

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\n\n");
    int max = a[0];
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i]; // Update nilai max jika ditemukan nilai yang lebih besar
        }

        if (a[i] < min)
        {
            min = a[i]; // Update nilai min jika ditemukan nilai yang lebih kecil
        }
    }

    printf("Nilai Maximumnya Adalah     : %d\n", max);
    printf("Nilai Minimumnya Adalah     : %d\n", min);

    return 0;
}