#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void garis_pa() {
    int i;
    for (i=0; i < 50; i++) {
    printf("=");
    }
    printf("\n");
}
void garis_pe() {
    int i;
    for (i=0; i < 25; i++) {
    printf("=");
    }
    printf("\n");
}
void clear() {
    printf("\033[2J\033[1;1H");
}

int main() {
    bool ulangi = true;


    garis_pa();
    printf("## Program Bahasa C Menghitung Faktorial ##\n");
    garis_pa();
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    garis_pa();
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.......\n");
    getchar();
    clear();
  
    do {
    clear();
    int angka,hasil,i;

    printf("Input angka  : ");
    if (scanf("%d", &angka) != 1) {
        printf("Angka Bos Bukan Karakter....\n");
        //return 1; // Keluar dengan kode kesalahan
    }
    // Memeriksa jika angka negatif
    if (angka < 0) {
        printf("Ga Bisa Atuh Aa Kalau Nilainya Negatif Mah............\n");
    } else {
        printf("Faktorial dari %d! adalah: ", angka);
        hasil = 1;
        for(i=angka; i>=1; i--) {
           hasil = hasil * i;
 
           // untuk menampilkan angka
           printf("%d",i);

           if(i != 1) {
              printf (" * ");
           }
        }
  printf(" = %d \n",hasil);
    }

    int running = 1;
    while (running) {
    garis_pe();
    printf("MENU PILIHAN\n");
    garis_pe();
    printf("1. Kembali Ke Menu Awal\n");
    printf("2. Keluar Dari Aplikasi\n");
    printf("Masukkan Pilihan Anda (1/2): ");
    int pilihanMenu;
    scanf("%d", &pilihanMenu);
    
    switch (pilihanMenu) {
            case 1:
                ulangi = true;
                running = 0;
                break;
            case 2:
                ulangi = false;
                running = 0;
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    
     } while (ulangi);

     printf("Terimakasih.....\n");
 
  return 0;
}