#include "lib.rekursif.h"

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
        return 0; // Invalid input, n harus lebih besar dari / sama dengan r
    }

    printf("\nFaktorisasi n dengan nilai %d :\n", n);
    printf("Rumus Permutasi:\n");
    printf("    n!\n");
    printf("---------\n");
    printf("( n - r ) !\n");

    // Menampilkan proses faktorisasi untuk n
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

    // Menampilkan proses faktorisasi dari (n - r)!
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

    // Menampilkan hasil akhir
    printf("\nMaka Sama Dengan :\n");
    printf("%d / %d = %d\n", sum_n, sum_nr, sum_n / sum_nr);

    return sum_n / sum_nr;
}

int combination(int n, int r)
{
    if (n < r)
    {
        return 0; // Invalid input, n harus lebih besar dari / sama dengan r
    }

    printf("\nRumus Kombinasi:\n");
    printf("    n!\n");
    printf("---------\n");
    printf("r! (n-r)!\n");

    // Menampilkan proses faktorisasi dari n
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

    // Menampilkan proses faktorisasi dari r
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

    // Menampilkan proses faktorisasi dari (n - r)
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

    // Menampilkan hasil akhir
    printf("\nMaka Sama Dengan :\n");
    printf("%d / (%d * %d) = %d\n", sum_n, sum_r, sum_nr, sum_n / (sum_r * sum_nr));

    return sum_n / (sum_r * sum_nr);
}

// Menginisialisasi memoization array
void initializeMemoization()
{
    for (int i = 0; i < MAX; i++)
    {
        memo[i] = -1; // -1 Indikasi bahwa nilai masih belum di hitung
    }
}

// Recursive Fibonacci function dengan memoization
long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    // Mengecek apakah nilai sudah di hitung
    if (memo[n] != -1)
    {
        return memo[n];
    }

    // Hitung dan simpan nilai fibonaci
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}