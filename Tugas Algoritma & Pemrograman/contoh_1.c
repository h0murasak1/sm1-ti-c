#include <stdio.h>

int main() {
    int tinggi = 7; // Tinggi huruf A
    int width = (2 * tinggi) - 1; // Lebar huruf A

    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= (tinggi - 1 - i) && j <= (tinggi - 1 + i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
