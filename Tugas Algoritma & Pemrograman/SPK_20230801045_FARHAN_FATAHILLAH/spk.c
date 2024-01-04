#include "spk.h"
#include "prc.spk.c"



int main(void)
{
    printf("===================== SPK PEMBAGIAN KELAS =======================\n");
    printf("Nama  : FARHAN FATAHILLAH\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaunggul.ac.id\n");
    printf("=================================================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();
    system("clear");
    int nKelas, nData;
    printf("PROGRAM SPK PEMBAGIAN KELAS\n");
    printf("==============================\n");

    // Meminta input jumlah kelas
    printf("Masukkan Banyak Kelas: ");
    scanf("%d", &nKelas);

    // Meminta input jumlah data
    printf("Masukkan Banyak Data: ");
    scanf("%d", &nData);

    // Meminta input data
    int data[nData * 2];
    printf("\nMasukkan %d pasang data:\n", 2 * nData);
    for (int i = 0; i < 2 * nData; i++)
    {
        printf("data ke %d : ", i + 1);
        scanf("%d", &data[i]);
    }

    // Memanggil fungsi bagiKelas
    bagiKelas(nKelas, nData, data);

    return 0;
}