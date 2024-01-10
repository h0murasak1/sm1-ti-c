#include "prc.rekursif.c"
#include "lib.rekursif.h"

int main()
{
    system("clear");
    printf("============================================================\n");
    printf("Nama    : Farhan Fatahillah\n");
    printf("NIM     : 20230801045\n");
    printf("Email   : farhanfatahillah10oib@students.esaunggul.ac.id\n");
    printf("=============================================================\n\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();

    int pilihan;
    int n, r;

    initializeMemoization(); // Inisialisasi memoization array

menu:
    system("clear");
    printf("Aplikasi Rekursif\n");
    printf("-----------------\n");
    printf("\n");
    printf("Menu : \n");
    printf("[1] Permutasi\n");
    printf("[2] Kombinasi\n");
    printf("[3] Fibonacci\n");
    printf("[4] Keluar\n");
    printf("\n");

    printf("Masukkan Pilihan [1-4]: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        system("clear");
        printf("==============================\n");
        printf("PERMUTASI\n");
        printf("==============================\n");

        printf("Masukkan Nilai n : ");
        scanf("%d", &n);
        printf("Masukkan Nilai r : ");
        scanf("%d", &r);

        if (n < 0 || r < 0 || n < r)
        {
            printf("Nilai n dan r harus non-negatif, dan n harus lebih besar atau sama dengan r.\n");
            break;
        }

        // Hitung dan tampilkan hasil permutasian
        int result_permutation = permutation(n, r);
        printf("\nMaka Hasil Kombinasi dari %dP%d adalah %d\n", n, r, result_permutation);

        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu;
        break;
    case 2:
        system("clear");
        printf("==============================\n");
        printf("KOMBINASI\n");
        printf("==============================\n");

        printf("Masukkan Nilai n : ");
        scanf("%d", &n);
        printf("Masukkan Nilai r : ");
        scanf("%d", &r);

        if (n < 0 || r < 0 || n < r)
        {
            printf("Nilai n dan r harus non-negatif, dan n harus lebih besar atau sama dengan r.\n");
            break;
        }

        // Hitung and Tampilkan hasil dari kombinasi
        int result_combination = combination(n, r);
        printf("\nMaka Hasil Kombinasi dari %dC%d adalah %d\n", n, r, result_combination);

        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu;
        break;
    case 3:
        system("clear");
        printf("==============================\n");
        printf("FIBONACI\n");
        printf("==============================\n");

        printf("Masukkan Nilai n : ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Nilai n harus non-negatif.\n");
            break;
        }

        // Hitung dan tampilkan hasil dari fibonaci
        long long result_fibonacci = fibonacci(n);
        printf("\nBilangan Fibonacci ke %d adalah %lld\n", n, result_fibonacci);

        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu;
        break;
    case 4:
        return 0;
    default:
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}