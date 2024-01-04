#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_ANTRIAN 5
int pilihan;
int nomorLoket = 0;
int fixNum = 0;
struct Antrian
{
    char nama[20];
};

struct Loket
{
    struct Antrian antrian[MAX_ANTRIAN];
    int jumlahAntrian;
};

void tambahAntrian(struct Loket loket[], int nomorLoket)
{
    if (loket[nomorLoket].jumlahAntrian < MAX_ANTRIAN)
    {
        loket[nomorLoket].jumlahAntrian++;
        fixNum++;
        printf("No. Antrian : %d\n", loket[nomorLoket].jumlahAntrian);
        printf("Nama Pelanggan: ");
        scanf("%s", loket[nomorLoket].antrian[loket[nomorLoket].jumlahAntrian].nama);
        printf("Antrian berhasil ditambahkan di loket %d\n", nomorLoket);
    }
    else
    {
        printf("Loket %d sudah mencapai batas antrian\n", nomorLoket);
    }
}

void eksekutor(struct Loket loket[], int nomorLoket)
{
    if (loket[nomorLoket].jumlahAntrian == 0)
    {
        printf("Loket %d tidak memiliki antrian\n", nomorLoket);
    }
    else
    {
        printf("Antrian '%s' di loket %d berhasil dihapus\n", loket[nomorLoket].antrian[0].nama, nomorLoket);
        for (int i = 0; i < loket[nomorLoket].jumlahAntrian - 1; i++)
        {
            loket[nomorLoket].antrian[i] = loket[nomorLoket].antrian[i + 1];
        }
        loket[nomorLoket].jumlahAntrian--;
    }
}

void tampilkanStatus(struct Loket loket[])
{
    printf("------ Data Antrian -----\n");
    for (int i = 1; i <= MAX_ANTRIAN; i++)
    {
        if (loket[nomorLoket].jumlahAntrian == 0)
        {
            printf("\tTidak ada antrian\n");
        }
        else
        {
            printf("No. Antrian : %d\n", fixNum);
            printf("Nama : %s", loket[i].antrian[i].nama);
            printf("Sisa Antrian : %d\n", loket[i].jumlahAntrian);
        }
    }
    getchar();
}

struct Loket loket[MAX_ANTRIAN + 1] = {0};

int main()
{
    do
    {
        printf ("i love man so much \n");
        printf("----------------------------------------\n\n");
        printf("             BARBER KSATRIA\n");
        printf("   Jl. Sodonk Kp. Sodonk Ds. Sodonk\n\n");
        printf("----------------------------------------\n\n");
        printf("\t----------MENU----------\n");
        printf("\t1. Tambah Antrian\n");
        printf("\t2. Hapus\n");
        printf("\t3. Daftar Tunggu\n");
        printf("\t4. Pendapatan\n");
        printf("\t5. Keluar\n");
        printf("\t------------------------\n");
        printf("Masukan Pilihan : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            if (nomorLoket <= MAX_ANTRIAN)
            {
                tambahAntrian(loket, nomorLoket);
            }
            else
            {
                printf("Nomor loket tidak valid\n");
            }
            break;
        case 2:
            break;
        case 3:
            tampilkanStatus(loket);
            break ;

                default : break;
        }

    } while (pilihan != 5);
}