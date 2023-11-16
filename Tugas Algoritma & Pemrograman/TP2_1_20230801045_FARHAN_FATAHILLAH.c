#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Tambahkan untuk tipe data boolean

// Harga makanan per item
#define HARGA_NASI_GORENG 20000
#define HARGA_MIE_GORENG 15000
#define HARGA_AYAM_GORENG 25000
#define HARGA_SATE_AYAM 30000
void garis__() {
    printf("========================\n");
}
void garis_() {
    printf("============\n");
}

int main() {
    bool ulangi = true; // Ubah menjadi tipe data boolean

        garis__();
        printf("Nama  : Farhan fatahillah\n");
        printf("NIM   : 20230801045\n");
        printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
        garis__();
        printf("\n");
        printf("Tekan ENTER Untuk Melanjutkan.............\n");
        getchar( );
        printf("\033[2J\033[1;1H");


    do {
    printf("\033[2J\033[1;1H");
    garis__();
    printf("APLIKASI WARTEG SEADANYA\n");
    garis__();

        printf("Menu Makanan:\n");
        printf("1. Nasi Goreng + Nasi Putih\n");
        printf("2. Mie Goreng + Mie Rebus\n");
        printf("3. Ayam Goreng + Ayam Bakar\n");
        printf("4. Sate Ayam + Sate Kambing\n");

        int pilihan;
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        int totalHarga = 0;
        int hargatotal = 0;
        int pajak = 0;
        int jumlah = 0;
        switch (pilihan) {
            case 1:
                garis_();
                printf("Rp.%d\n", HARGA_NASI_GORENG);
                garis_();
                printf("Jumlah porsi Nasi Goreng yang akan dipesan: ");
                scanf("%d", &jumlah);
                totalHarga += HARGA_NASI_GORENG * jumlah;
                break;
            case 2:
                garis_();
                printf("Rp.%d\n", HARGA_MIE_GORENG);
                garis_();
                printf("Jumlah porsi Mie Goreng yang akan dipesan: ");
                scanf("%d", &jumlah);
                totalHarga += HARGA_MIE_GORENG * jumlah;
                break;
            case 3:
                garis_();
                printf("Rp.%d\n", HARGA_AYAM_GORENG);
                garis_();
                printf("Jumlah porsi Ayam Goreng yang akan dipesan: ");
                scanf("%d", &jumlah);
                totalHarga += HARGA_AYAM_GORENG * jumlah;
                break;
            case 4:
                garis_();
                printf("Rp.%d\n", HARGA_SATE_AYAM);
                garis_();
                printf("Jumlah porsi Sate Ayam yang akan dipesan: ");
                scanf("%d", &jumlah);
                totalHarga += HARGA_SATE_AYAM * jumlah;
                break;
            default:
                printf("Menunya Cuma Sampe 4 Bos.\n");
                break;
        }

        // Hitung pajak (10% dari totalHarga)
        pajak = totalHarga * 0.1;

        // Hitung total harga termasuk pajak
        hargatotal = totalHarga + pajak;

        printf("Pajak 10%%  Rp. %d\n", pajak);
        printf("Total harga termasuk pajak: Rp. %d\n", hargatotal);


        garis_();
        printf("MENU PILIHAN\n");
        garis_();
        printf("1. Kembali Ke Menu Awal\n");
        printf("2. Keluar Dari Aplikasi\n");
        printf("Masukkan Pilihan Anda (1/2): ");
        int pilihanMenu;
        scanf("%d", &pilihanMenu);

        if (pilihanMenu == 1) {
            ulangi = true;
        } else if (pilihanMenu == 2) {
            ulangi = false;
        } else {
            printf("Pilihan tidak valid. Aplikasi akan keluar.\n");
            ulangi = false;
        }

    } while (ulangi);

     printf("Terimakasih.....\n");

    return 0;
}