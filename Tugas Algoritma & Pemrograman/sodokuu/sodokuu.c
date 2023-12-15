#include "prc.sodokuu.c"
#include "lib.sodokuu.h"

int main()
{
    printf("=================================================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();
    // Memulai Game
    system("clear");
    printf("Permainan sodoku ini berbasis pattern matriks\n");
    printf("Ynag berbaris 4x4 dengan isi yang telah ditentukan.\n");
    printf("Selamat Bermain........\n");
    printf("==================================================================\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();

    sodoku();

    return 0;
}