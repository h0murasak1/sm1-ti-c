#include "lib.rekursif.h"
#include "prc.rekursif.c"

int main() {
    int angka;

    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);

    // Memanggil fungsi rekursif untuk menghitung faktorial
    int hasil = faktorial(angka);

    printf("Faktorial dari %d adalah %d\n", angka, hasil);

    return 0;
}
