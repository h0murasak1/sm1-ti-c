#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i % 2 == 1) {
            printf("%d", i);
            printf("*");
        } else {
            printf("%d", i);
            printf("*");
        }
    }

    return 0;
}