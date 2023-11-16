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
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            printf("_");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
        }
        return 0;
}