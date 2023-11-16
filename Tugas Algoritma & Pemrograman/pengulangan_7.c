#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d, ", i);
        } else {
            printf("1/%d, ", i);
        }
    }

    return 0;
}