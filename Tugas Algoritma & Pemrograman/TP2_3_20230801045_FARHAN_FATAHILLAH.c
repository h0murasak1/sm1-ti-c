/*
  NAMA : FARHAN FATAHILLAH
  NIM  : 20230801045
*/

#include <stdio.h>
#include <stdbool.h> // Tambahkan untuk tipe data boolean

int main() {
    int a, b, c;
    bool ulangi = true; // Ubah menjadi tipe data bool

        printf("=================================\n");
        printf("Nama  : Farhan fatahillah\n");
        printf("NIM   : 20230801045\n");
        printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
        printf("=================================\n");
        printf("\n");
        printf("Tekan ENTER Untuk Melanjutkan.............\n");
        getchar( );
        printf("\033[2J\033[1;1H");

    do {
     printf("\033[2J\033[1;1H");
     printf("Masukkan angka Pertama : ");
     scanf("%d", &a);
     printf("Masukkan angka kedua   : ");
     scanf("%d", &b);
     printf("Masukkan angka ketiga  : ");
     scanf("%d", &c);

    // Memasukkan tiga angka dari pengguna
    

    // Menggunakan pendekatan sederhana untuk mengurutkan angka-angka
    int temp;
    if (c > b) {
        temp = c;
        c = b;
        b = temp;
    }
    if (c > a) {
        temp = c;
        c = a;
        a = temp;
    }
    if (b > a) {
        temp = b;
        b = a;
        a = temp;
    }

    // Menampilkan angka-angka yang sudah diurutkan
    printf("Angka yang sudah diurutkan dari yang terbesar: %d %d %d\n", a, b, c);
    printf("Angka yang sudah diurutkan dari yang terkecil: %d %d %d\n", c, b, a);

    printf("==============\n");
    printf("MENU PILIHAN\n");
    printf("==============\n");
    printf("1. Kembali Ke Menu Awal\n");
    printf("2. Keluar Dari Aplikasi\n");
    printf("Masukkan Pilihan Anda  : ");
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
 }while(ulangi);

    return 0;
}