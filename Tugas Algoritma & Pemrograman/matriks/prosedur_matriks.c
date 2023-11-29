#include "matriks.h"
#include "prc.matriks.c"

int main(void)
{
    int menu;
    bool ulangi = true;
    printf("=================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();
    do
    {
    awal:
        clear();
        printf("===============================\n");
        printf("=       PROGRAM MATRIKS       =\n");
        printf("===============================\n");
        printf("1. Penjumlahan Matriks\n");
        printf("2. Pengurangan Matriks\n");
        printf("3. Transpose   Matriks\n");
        printf("4. Keluar\n");
        printf("Pilih Menu : ");
        scanf("%d", &menu);
        if (menu == 4)
        {
            printf("Terima Kasih......");
            return 0;
        }
        matriks(menu);

        fflush(stdin);
        printf("Apakah Anda Ingin Kembali Ke Menu (Y/T)?  : ");
        char pilihanMenu;
        scanf("%c", &pilihanMenu);

        if (pilihanMenu == 'Y' || pilihanMenu == 'y')
        {
            ulangi = true;
        }
        else if (pilihanMenu == 'T' || pilihanMenu == 't')
        {
            ulangi = false;
        }
        else
        {
            printf("Pilihan tidak valid. Aplikasi akan keluar.\n");
            ulangi = false;
        }
    } while (ulangi);
}