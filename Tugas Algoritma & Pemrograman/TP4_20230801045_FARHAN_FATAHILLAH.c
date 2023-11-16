#include <stdio.h>
int i, j, n, berhasil, berhasil_2;
void clear() {
    printf("\033[2J\033[1;1H");
}

void logo_valo() {
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf(" █");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for ( j = 1; j <= i; j++) {
            printf(" █");
        }
        printf("\n");
    }

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf("  ");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf(" █");
        }
        printf("\n");
    }
}

int main() {
    awal:
    clear();
    printf("Masukkan jumlah input: ");
    berhasil = scanf("%d", &n);

    if(berhasil != 1 || getchar() != '\n' || n < 1){
        printf("\n");
        printf("Inputan Harus Berupa Angka / Tidak Boleh Lebih kecil Dari 1\n");
        fflush(stdin);
        printf("Tekan Enter untuk lanjut...");
        getchar();
        goto awal;
    }
    else {
    logo_valo();
    }
    int menu_akhir = 1;
        while (menu_akhir) {
        akhir:
        printf("===================\n");
        printf("MENU PILIHAN\n");
        printf("===================\n");
        printf("1. Kembali Ke Menu Awal\n");
        printf("2. Keluar Dari Aplikasi\n");
        printf("Masukkan Pilihan Anda (1/2): ");
        int pilihanMenu;
        berhasil_2 = scanf("%d", &pilihanMenu);

        if(berhasil_2 != 1 || getchar() != '\n' || pilihanMenu < 1 || pilihanMenu > 2){
            printf("\n");
            printf("Input tidak valid. masukkan angka antara 1 dan 2\n");
            fflush(stdin);
            printf("Tekan Enter untuk lanjut...");
            getchar();
            goto akhir;
        }
    
        switch (pilihanMenu) {
            case 1:
                goto awal;
                break;
            case 2:
                printf("Terima Kasih.....\n");
                return 0;
                break;
        }
    }
    return 0;
}
