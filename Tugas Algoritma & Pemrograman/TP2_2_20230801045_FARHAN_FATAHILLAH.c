/*
  NAMA : FARHAN FATAHILLAH
  NIM  : 20230801045
*/

#include <stdio.h>
#include <stdbool.h> // Tambahkan untuk tipe data boolean
#include <math.h>

int main() {
    double pythagoras;
    int keliling, a, b, c ;
    float tinggi, area, luas, semi_perimeter;
    bool ulangi = true; // Ubah menjadi tipe data bool

        printf("\n=================================");
        printf("=====================================================\n");
        printf("\nNama  : Farhan fatahillah");
        printf("\nNIM   : 20230801045");
        printf("\nEmail : farhanfatahillah10oib@student.esaungul.ac.id");
        printf("\n=================================");
        printf("=====================================================\n");
        printf("\n");
        printf("Tekan ENTER Untuk Melanjutkan.............\n");
        getchar( );
        printf("\033[2J\033[1;1H");

    do {
    printf("\033[2J\033[1;1H");
    printf("======================================\n");
    printf("Aplikasi Segitiga\n");
    printf("======================================\n");

    // Memasukkan panjang sisi-sisi segitiga dari pengguna
    printf("Masukkan panjang sisi a: ");
    scanf("%d", &a);
    printf("Masukkan panjang sisi b: ");
    scanf("%d", &b);
    printf("Masukkan panjang sisi c: ");
    scanf("%d", &c);

    semi_perimeter = (a + b + c) / 2;


    // Mendeteksi jenis segitiga
    if (a == b && b == c) {
        printf("Segitiga sama sisi\n");
        area = (sqrt(3) / 4) * a * a;
        luas = (a * a) * sqrt(3) / 4;
        printf("Luas = %.2lf\n", luas);
        printf("Keliling: %d\n", 3*a);
    } else if (a == b || b == c || c == a) {
        printf("Segitiga sama kaki\n");
        if (a == b)
            area = 0.5 * a * sqrt(c*c - ((b*b)/4));
        else if (b == c)
            area = 0.5 * b * sqrt(a*a - ((b*b)/4));
        else
            area = 0.5 * c * sqrt(b*b - ((c*c)/4));
            luas = sqrt(semi_perimeter * (semi_perimeter - a) *(semi_perimeter - b) *(semi_perimeter - c));
        printf("Luas = %f\n", luas);
        printf("Keliling: %d\n", a+b+c);
    } else if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c) {
        printf("Segitiga siku-siku.\n");
            luas = sqrt(semi_perimeter * (semi_perimeter - a) *(semi_perimeter - b) *(semi_perimeter - c));
        printf("Luas = %f\n", luas);

    }else {
        printf("Segitiga ini adalah segitiga sembarang.\n");
            luas = sqrt(semi_perimeter * (semi_perimeter - a) *(semi_perimeter - b) *(semi_perimeter - c));
        printf("Luas = %f\n", luas);
    }
    

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