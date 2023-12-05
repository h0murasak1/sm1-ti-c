#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Periksa apakah kunci berada di tengah
        if (arr[mid] == key)
            return mid;

        // Jika kunci lebih kecil, abaikan setengah kanan
        else if (arr[mid] > key)
            high = mid - 1;

        // Jika kunci lebih besar, abaikan setengah kiri
        else
            low = mid + 1;
    }

    // Kunci tidak ditemukan
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Elemen tidak ditemukan dalam array\n");
    else
        printf("Elemen ditemukan pada indeks %d\n", result);

    return 0;
}
