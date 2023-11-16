#include <stdio.h>
#include <math.h>

void checkTriangle(int a, int b, int c) {
    float s, area;
    if (a == b && b == c) {
        printf("Segitiga sama sisi\n");
        area = (sqrt(3) / 4) * a * a;
        printf("Luas: %.2f\n", area);
        printf("Keliling: %d\n", 3*a);
    } else if (a == b || b == c || c == a) {
        printf("Segitiga sama kaki\n");
        if (a == b)
            area = 0.5 * a * sqrt(c*c - ((b*b)/4));
        else if (b == c)
            area = 0.5 * b * sqrt(a*a - ((b*b)/4));
        else
            area = 0.5 * c * sqrt(b*b - ((c*c)/4));
        printf("Luas: %.2f\n", area);
        printf("Keliling: %d\n", a+b+c);
    } else {
        printf("Segitiga sembarang\n");
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Luas: %.2f\n", area);
        printf("Keliling: %d\n", a+b+c);
    }
    if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
        printf("Segitiga ini juga memenuhi Teorema Pythagoras\n");
}

int main() {
    int a, b, c;
    printf("Masukkan panjang sisi segitiga:\n");
    scanf("%d%d%d", &a, &b, &c);
    checkTriangle(a, b, c);
    return 0;
}
