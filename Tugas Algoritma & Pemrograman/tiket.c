#include <stdio.h>
#include <stdlib.h>

int menu, tiket;
int ekonomi = 100000;
int bisnis = 200000;
int eksekutif = 300000;
int jumlah = 0;
int total = 0;
int diskon = 0;

int main()
{
    system("clear");
    printf("==================================\n");
    printf("APLIKASI TIKET KERETA SUDI MAKMUR\n");
    printf("==================================\n");
    printf("PILIHAN MENU\n");
    printf("=============\n");
    printf("1. Ekonomi      (Rp.100.000/Tiket)\n");
    printf("2. Bisnis       (Rp.200.000/Tiket)\n");
    printf("3. Eksekutif    (Rp.300.000/Tiket)\n");
    printf("4. Keluar \n");
    printf("Masukkan Pilihan Tiket : ");
    scanf("%d", &menu);
    system("clear");

    switch (menu)
    {
    case 1:
        printf("kelas ekonomi\n");
        printf("==================\n");
        printf("Berapa Jumlah Tiket Yang Ingin Di Pesan : ");
        scanf("%d", &tiket);
        jumlah = ekonomi * tiket;
        break;
    case 2:
        printf("kelas bisnis\n");
        printf("==================\n");
        printf("Berapa Jumlah Tiket Yang Ingin Di Pesan : ");
        scanf("%d", &tiket);
        jumlah = bisnis * tiket;
        break;
    case 3:
        printf("kelas eksekutif\n");
        printf("==================\n");
        printf("Berapa Jumlah Tiket Yang Ingin Di Pesan : ");
        scanf("%d", &tiket);
        jumlah = eksekutif * tiket;
        break;
    case 4:
        printf("Terima Kasih.....");
        break;
        return 1;
    }

    if (jumlah >= 500000)
    {
        diskon = jumlah * 0.1;
        total = jumlah - diskon;
    }
    else if (jumlah >= 300000)
    {
        diskon = jumlah * 0.05;
        total = jumlah - diskon;
    }
    else if (jumlah >= 200000)
    {
        diskon = jumlah * 0.02;
        total = jumlah - diskon;
    }
    else
    {
        total = jumlah;
    }
    system("clear");
    printf("Jumlah Tiket Yang Di Pesan Adalah : %d\n", tiket);
    printf("Diskon Yang Anda Dapatkan Sebesar : %d\n", diskon);
    printf("Jumlah Yang Harus Di Bayar Adalah : Rp.%d\n", total);
}