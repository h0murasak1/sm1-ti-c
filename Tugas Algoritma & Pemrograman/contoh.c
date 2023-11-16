#include <stdio.h>

void logovalo(int n) {
    int i, j, k;
    for (i = 1; i < n; i++) {
        for (j = 1; j < 2 * n; j++) {
            if (i >= j || i + j >= 2 * n )
                printf(" *");
                
            else
                printf("  ");
        }
        printf("\n");
    }

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf("  ");
         
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf(" *");
         
        }
        printf("\n");
    }
}
    
int main() {
    int n;
    printf("Masukkan tinggi input: ");
    scanf("%d", &n);
    logovalo(n);
    return 0;
}