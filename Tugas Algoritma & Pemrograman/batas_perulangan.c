#include <stdio.h>
#include <stdlib.h>

void clear() {
    printf("\033[2J\033[1;1H");
}
int awal, batas;

int main () {
    clear();
    awal_menu:
    awal = 1;

    printf("Masukkan Batas Perulangan : ");
    scanf ("%d", &batas);

    while(awal<=batas) {
        printf("Perulangan ke : %d\n", awal);
        awal++;
    }
    int menu_akhir = 1;
    while (menu_akhir) {
    printf("MENU PILIHAN\n");
    printf("1. Kembali Ke Menu Awal\n");
    printf("2. Keluar Dari Aplikasi\n");
    printf("Masukkan Pilihan Anda (1/2): ");
    int pilihanMenu;
    int berhasil_2;
    berhasil_2 = scanf("%d", &pilihanMenu);

    if(berhasil_2 != 1 || getchar() != '\n' || pilihanMenu < 1 || pilihanMenu > 2){
        printf("\n");
        printf("Input tidak valid. masukkan angka antara 1 dan 2\n");
        fflush(stdin);
        printf("Tekan Enter untuk Keluar...");
        getchar();
        return 0;
    }
    
        switch (pilihanMenu) {
            case 1:
                goto awal_menu;
                break;
            case 2:
                printf("Terima Kasih.....");
                return 0;
                break;
            
                
        }
    }
}