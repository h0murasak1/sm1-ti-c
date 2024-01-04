#include <stdio.h>
#include <string.h>

// Fungsi untuk menukar dua karakter
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk mengurutkan array menggunakan algoritma bubble sort
void bubbleSort(char arr[], int n)
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
void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c\n", arr[i]);
        printf("===================\n");
    }
    printf("\n");
}

int main()
{
    int n;

    // Meminta pengguna untuk memasukkan jumlah elemen array
    printf("Masukkan Banyak Data: ");
    scanf("%d", &n);

    char arr[n];

    // Meminta pengguna untuk memasukkan elemen array
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan Kata : ");
        fflush(stdin);
        scanf("%c", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Setelah Diurutkan: \n");
    printArray(arr, n);

    return 0;
}
