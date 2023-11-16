#include "stdlib.h"
#include "MinMax.h"
#include "prc.MinMax.c"

void clear()
{
    printf("\033[2J\033[1;1H");
}

int main(void)
{
    clear();
    int input;
    printf("==========| | Program Mencari Nilai Min & Max | |==========\n");
    printf("Masukkan Banyak Array : ");
    scanf("%d", &input);

    printf("===========================================================\n");
    printf("Input Array\n");
    printf("===========================================================\n");
    minmax(input);

    getchar();

    return 0;
}