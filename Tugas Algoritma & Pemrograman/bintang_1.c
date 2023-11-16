#include <stdio.h>
#include <stdlib.h>

void clear() {
    printf("\033[2J\033[1;1H");
}
int n, i, j; 
int main() {    
        clear();
        printf("\n");
        printf("Masukkan batas perulangan: ");
        int berhasil;
        berhasil = scanf("%d", &n);

        if(berhasil != 1 || getchar() != '\n' || n < 1){
            printf("\n");
            printf("Inputan Harus Berupa Angka\n");
            fflush(stdin);
            printf("Tekan Enter untuk Keluar...");
            getchar();
            return 0;
        }else {
            //k = n * n; // rumus jumlah deret aritmatika
            //n[4] *= 2;
            for (i = 1; i <= n; i ++) {
                for (j = 1; j <= i; j++) {
                printf(" * ");
                }
                printf("\n");
            }
        }
    return 0;
}