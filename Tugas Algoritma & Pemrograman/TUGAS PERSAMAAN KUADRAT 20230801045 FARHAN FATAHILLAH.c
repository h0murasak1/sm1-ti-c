/*
NAMA : FARHAN FATAHILLAH
NIM  : 20230801045
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int discriminant;
    char ulangi = '1';
    do 
    {

      printf("\x1b[36m==========================\x1b[0m\n");
      printf("\x1b[36mProgram Mencari Akar\x1b[0m\n");
      printf("\x1b[36mOleh : Farhan Fatahillah\x1b[0m\n");
      printf("\x1b[36m=================================\x1b[0m\n");
      
      //input koefisien
      printf("Masukkan koefisien a: ");
      scanf("%lf", &a);
      printf("Masukkan koefisien b: ");
      scanf("%lf", &b);
      printf("Masukkan koefisien c: ");
      scanf("%lf", &c);

      // Menghitung diskriminan
      discriminant = b * b - 4 * a * c;
      printf("Diskriminan = %d\n", discriminant);
      // Mengecek nilai diskriminan
      if (discriminant == 0) 
     {
        printf("AKAR REAL SAMA!!\n");
     }
      else if (discriminant > 0) 
     {
        printf("AKAR REAL BEDA!!\n");
     } 
      else 
     {
        printf("BILANGAN IMAJINER!!\n");
     }

      printf("==============\n");
      printf("MENU PILIHAN\n");
      printf("==============\n");

      printf("1. Kembali Ke Menu Awal\n");
      printf("2. Keluar Dari Aplikasi\n");
      printf("Masukkan Pilihan Anda : ");
      scanf(" %c", &ulangi);

    } while(ulangi == '1');

    printf("Terima Kasih!!..");

    return 0;
}