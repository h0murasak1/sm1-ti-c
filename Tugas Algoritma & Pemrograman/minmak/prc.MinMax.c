#include "MinMax.h"

void minmax(int input)
{
    int i, j, k;
    int nilai[100];

    int min, maks;
    int besar, kecil;

    for (i = 0; i < input; i++)
    {
        printf("Array Ke-%d = ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\n==========================\n");

    min = nilai[0];
    for (j = 1; j < input; j++)
    {
        if (nilai[j] < min)
        {
            min = nilai[j];
        }
    }

    maks = nilai[0];
    for (k = 1; k < input; k++)
    {
        if (nilai[k] > maks)
        {
            maks = nilai[k];
        }
    }

    besar = maks;
    kecil = min;

    printf("Max = %d\n", besar);
    printf("Min = %d\n", kecil);
}