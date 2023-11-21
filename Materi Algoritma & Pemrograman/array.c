#include <stdio.h>

int main()
{
    int i, a[10];
    for (i = 1; i <= 5; i++) //perulangan untuk pengembalian data
    {
        printf("A[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n\n");
    for (i=1; i<=5; i++) //perulangan untuk menampilkna data
    {
        printf("A[%d] : %d\n", i, a[i]);
    }
    return 0;
}