#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int permutation(int n, int r)
{
    if (n < r)
    {
        return 0; // Invalid input, n should be greater than or equal to r
    }

    printf("\nFaktorisasi n dengan nilai %d :\n", n);
    printf("Rumus Permutasi:\n");
    printf("    n!\n");
    printf("---------\n");
    printf("( n - r ) !\n");

    // Display the factorization process for n
    printf("_________\n\n");
    printf("Begin Factorization Process\n");
    printf("---------------------------\n");
    printf("%d!\n\n", n);
    int sum_n = 1;
    int total = 0;
    

    for (int i = 1; i <= n; i++)
    {
        int sum_j = 1;
        for (int j = n; j >= i; j--)
        {
            printf("%d", j);
            sum_j *= j;
            if (j != i)
            {
                printf(" * ");
            }
        }
        printf(" = %d\n", sum_j);
        printf("\n");
        total += sum_j;
        sum_n *= i;
    }
    printf("Hasil Penjumlahan = %d\n", total);
    printf("Hasil Dari Faktorial 5! = %d\n", sum_n);

    printf("_________\n\n");
    printf("End Factorization Process\n");
    printf("---------------------------\n");

    // Display the factorization process for (n-r)
    printf("\nFaktorisasi (n-r) dengan nilai %d:\n", n - r);
    printf("_________\n\n");
    printf("Begin Factorization Process\n");
    printf("---------------------------\n");

    int sum_nr = 1;

    for (int i = n - r; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        sum_nr *= i;
    }

    printf("\nHasil faktorial dari (n - r)! = %d\n", sum_nr);

    printf("_________\n");
    printf("End Factorization Process\n");
    printf("---------------------------\n");

    // Display the final result
    printf("\nMaka Sama Dengan :\n");
    printf("%d / %d = %d\n", sum_n, sum_nr, sum_n / sum_nr);

    return sum_n / sum_nr;
}

int combination(int n, int r)
{
    if (n < r)
    {
        return 0; // Invalid input, n should be greater than or equal to r
    }

    printf("\nRumus Kombinasi:\n");
    printf("    n!\n");
    printf("---------\n");
    printf("r! (n-r)!\n");

    // Display the factorization process for n
    printf("\nFaktorisasi n dengan nilai %d :\n", n);
    printf("_________\n");
    printf("Begin Factorization Process\n");
    printf("---------------------------\n");

    int sum_n = 1;

    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        sum_n *= i;
    }

    printf(" = %d\n", sum_n);

    printf("_________\n");
    printf("End Factorization Process\n");
    printf("---------------------------\n");

    // Display the factorization process for r
    printf("\nFaktorisasi r dengan nilai %d :\n", r);
    printf("_________\n");
    printf("Begin Factorization Process\n");
    printf("---------------------------\n");

    int sum_r = 1;

    for (int i = r; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        sum_r *= i;
    }

    printf(" = %d\n", sum_r);

    printf("_________\n");
    printf("End Factorization Process\n");
    printf("---------------------------\n");

    // Display the factorization process for (n-r)
    printf("\nFaktorisasi (n-r) dengan nilai %d :\n", n - r);
    printf("_________\n");
    printf("Begin Factorization Process\n");
    printf("---------------------------\n");

    int sum_nr = 1;

    for (int i = n - r; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        sum_nr *= i;
    }

    printf(" = %d\n", sum_nr);

    printf("_________\n");
    printf("End Factorization Process\n");
    printf("---------------------------\n");

    // Display the final result
    printf("\nMaka Sama Dengan :\n");
    printf("%d / (%d * %d) = %d\n", sum_n, sum_r, sum_nr, sum_n / (sum_r * sum_nr));

    return sum_n / (sum_r * sum_nr);
}

// Define an array to store previously calculated Fibonacci values
#define MAX 100
long long memo[MAX];

// Initialize memoization array
void initializeMemoization()
{
    for (int i = 0; i < MAX; i++)
    {
        memo[i] = -1; // -1 indicates that the value has not been calculated yet
    }
}

// Recursive Fibonacci function with memoization
long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    // Check if the value has already been calculated
    if (memo[n] != -1)
    {
        return memo[n];
    }

    // Calculate and store the Fibonacci value
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

void function()
{
    int pilihan;
    int n, r;

    initializeMemoization(); // Initialize memoization array

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

        // Calculate and display the combination result
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

        // Calculate and display the Fibonacci result
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