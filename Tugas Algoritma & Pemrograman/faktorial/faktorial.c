#include "faktorial.h"
#include "prc.faktorial.c"

void clear()
{
    printf("\033[2J\033[1;1H");
}

int main(void)
{
    clear();
    int angka;
    printf("==========| | Program Menghitung Faktorial | |==========\n");
    printf("Input angka  : ");
    if (scanf("%d", &angka) != 1)
    {
        printf("Angka Bos Bukan Karakter....\n");
        // return 1; // Keluar dengan kode kesalahan
    }
    if (angka < 0)
    {
        printf("Ga Bisa Atuh Aa Kalau Nilainya Negatif Mah............\n");
    }
    else
    {
        printf("===========================================================\n");
        printf("Faktorial\n");
        printf("===========================================================\n");
        faktorial(angka);
    }
    getchar();

    return 0;
}