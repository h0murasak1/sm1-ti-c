#include <stdio.h>

int main() {
    int i, n, a[10];

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    // Meminta pengguna untuk memasukkan angka
    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    int angkaCari;
    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &angkaCari);

    // Mencari angka 5 dalam array
    int ditemukan = 0;  // flag untuk menandai apakah angka 5 ditemukan atau tidak

    for (i = 0; i < n; i++) {
        if (a[i] == angkaCari) {
            ditemukan = 1;  // angka 5 ditemukan
            break;          // keluar dari loop karena angka sudah ditemukan
        }
    }

    // Menampilkan hasil
    if (ditemukan) {
        printf("Angka %d ditemukan dalam array.\n", angkaCari);
    } else {
        printf("Angka %d tidak ditemukan dalam array.\n", angkaCari);
    }

    return 0;
}
