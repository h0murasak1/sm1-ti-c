#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis kasus: faktorial dari 0 dan 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Langkah rekursif: n! = n * (n-1)!
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;

    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);

    // Memanggil fungsi rekursif untuk menghitung faktorial
    int hasil = faktorial(angka);

    printf("Faktorial dari %d adalah %d\n", angka, hasil);

    return 0;
}
