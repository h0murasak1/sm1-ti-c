#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

void bagiKelas(int z1, int b, int c[]) {
    int v1[b / 2], i, j;

    for (i = 0, j = 0; i < b; i += 2, j++) {
        v1[j] = c[i] + c[i + 1];
    }

    selectionSort(v1, b / 2); // Menggunakan selection sort pada v1

    for (i = 0; i < z1; i++) {
        printf("Kelas X-%d :\n", i + 1);
        for (j = i; j < b / 2; j += z1) {
            if (j < b / 2) {
                printf("%d | %d\n", c[j * 2], c[j * 2 + 1]);
            } else {
                printf("0 | 0\n");
            }
        }
        printf("------------------------\n");
    }
}

int main() {
    int a, b, i;

    printf("Masukkan Banyak Kelas: ");
    scanf("%d", &a);

    printf("Masukkan Banyak Data: ");
    scanf("%d", &b);

    b *= 2; 
    int c[b];

    printf("Masukkan %d pasang data:\n", b / 2);
    for (i = 0; i < b; i++) {
        int x1;
        printf("data ke %d : ", i + 1);
        scanf("%d", &x1);
        c[i] = x1;
    }
    selectionSort(c, b);

    bagiKelas(a, b, c);

    return 0;
}
