#include <stdio.h>

// Fungsi untuk menukar dua angka
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Angka ke %d\t: %d \n", i + 1, arr[i]);
        if (i == (size / 2) - 1)
        {
            printf("---------------------------\n");
        }
    }
    printf("\n");
}

int main()
{
    int n;
    int angka, total;

    // Meminta pengguna untuk memasukkan jumlah elemen array
    printf("Masukkan Jumlah Angka Yang Diinginkan: ");
    scanf("%d", &n);

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen array
    printf("Masukkan elemen array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Masukan Angka ke-%d\t: ", i + 1);
        scanf("%d", &arr[i]);
        angka = arr[i];
        total += angka;
    }
    printf("\n");

    bubbleSort(arr, n);

    int rata = (float)total / n;
    printf("Rata-rata : %d\n", rata);
    printf("\n");

    printf("Setelah diurutkan: \n");
    printArray(arr, n);

    return 0;
}
