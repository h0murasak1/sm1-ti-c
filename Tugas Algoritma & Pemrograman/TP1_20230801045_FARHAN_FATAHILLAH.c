/*
NAMA : FARHAN FATAHILLAH
NIM  : 20230801045
*/

#include <stdio.h>

int main() {
    char ulangi = '1';
    do {
     printf("\n=================================");
     printf("\nProgram Kalkulator Sederhana");
     printf("\nOleh : Farhan Fatahillah");
     printf("\n=================================");

     int a, b, hasiltambah, hasilkurang,  hasilkali, hasilbagi;
     printf("\nMasukkan angka pertama : ");
     scanf("%d", &a);

     printf("\nMasukkan angka kedua   : ");
     scanf("%d", &b);
     hasiltambah = a+b;
     hasilkurang = a-b;
     hasilkali   = a*b;
     hasilbagi   = a/b;
    

     printf("Penjumlahan Dari %d + %d = %d\n",a,b,hasiltambah);
     printf("Pengurangan Dari %d - %d = %d\n",a,b,hasilkurang);
     printf("Perkalian Dari   %d * %d = %d\n",a,b,hasilkali);
     printf("Pebagian Dari    %d / %d = %d\n",a,b,hasilbagi);

     printf("==============\n");
     printf("MENU PILIHAN\n");
     printf("==============\n");

     printf("1. Kembali Ke Menu Awal\n");
     printf("2. Keluar Dari Aplikasi\n");
     printf("Masukkan Pilihan Anda : ");
     scanf(" %c", &ulangi);

    } while(ulangi == '1');

    printf("Terima Kasih!!..");
 
}