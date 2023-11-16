#include <stdlib.h>
#include <stdio.h>

int main () {
    int j, i, input;

    printf("Masukkan Angka : ");
    scanf("%d", &input);

        for(i = 1; i <= (input -1); i++) {
            for (j = (input - 2); j >= i; j--) {
                printf("_");
            }
            for (j = 0; j <= i; j++) {
                printf("*");
            }
            for (j = input; j >= 1; j--) {
                printf("_");
            }
            for (j = 0; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
        for (i=1; i <= 2; i++) {
            for (j = 1; j <= input + (i -1); j++) {
                printf("_");
            }
            for (j = 1; j <= input - ((i -1 ) * 2); j++) {
                printf("*");
            }
            printf("\n");
        }
    getchar();
    return 0;
}
