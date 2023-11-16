//#include "konversi.h"
#include "prc.konversi.c"
#include "stdio.h"


int main(void)
{
    clear();
    printf("\n=================================");
    printf("===================================\n");
    printf("\nNama  : Farhan fatahillah");
    printf("\nNIM   : 20230801045");
    printf("\nEmail : farhanfatahillah10oib@student.esaungul.ac.id");
    printf("\n=================================");
    printf("===================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();
    clear();
awal:
    clear();
    int berhasil_2;
    int menu;
    printf("==========| | Menu Konversi Celcius | |==========\n");
    printf("1. Celcius -> Fahrenheit\n");
    printf("2. Celcius -> Reamur\n");
    printf("3. Celcius -> Kelvin\n");
    printf("Masukkan Pilihan  : ");
    scanf("%d", &menu);
    konversi(menu);

menu:

    garis_pe();
    printf("MENU PILIHAN\n");
    garis_pe();
    printf("1. Kembali Ke Menu Awal\n");
    printf("2. Keluar Dari Aplikasi\n");
    printf("Masukkan Pilihan Anda (1/2): ");
    int pilihanMenu;
    berhasil_2 = scanf("%d", &pilihanMenu);

    if (berhasil_2 != 1 || getchar() != '\n' || pilihanMenu < 1 || pilihanMenu > 2)
    {
        printf("\n");
        printf("Input tidak valid. masukkan angka antara 1 dan 2\n");
        fflush(stdin);
        printf("Tekan Enter untuk lanjut...");
        getchar();
        goto menu;
    }

    switch (pilihanMenu)
    {
    case 1:
        goto awal;
        break;
    case 2:
        printf("Terima Kasih.....");
        return 0;
        break;
    }
}