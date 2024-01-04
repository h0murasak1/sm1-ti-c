#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_LOKET 5
#define MAX_ANTRIAN 3

struct Loket
{
    char nama[20];
    int antrian;
};

void tambahAntrian(struct Loket loket[], int nomorLoket)
{
    if (loket[nomorLoket].antrian <= MAX_ANTRIAN)
    {
        printf("Masukkan nama pelanggan: ");
        scanf("%s", loket[nomorLoket].nama);
        loket[nomorLoket].antrian++;
        printf("Antrian berhasil ditambahkan di loket %d\n", nomorLoket);
    }
    else
    {
        printf("Loket %d sudah penuh\n", nomorLoket);
    }
}

void hapusAntrian(struct Loket loket[], int nomorLoket)
{
    if (loket[nomorLoket].antrian == 0)
    {
        printf("Loket %d tidak memiliki antrian\n", nomorLoket);
    }
    else
    {
        loket[nomorLoket].antrian--;
        printf("Antrian di loket %d berhasil dihapus\n", nomorLoket);
    }
}

void tampilkanStatus(struct Loket loket[])
{
    for (int i = 1; i <= MAX_LOKET; i++)
    {
        printf("LOKET [%d]: ", i);
        if (loket[i].antrian == 0)
        {
            printf("Tidak ada antrian\n");
        }
        else
        {
            for (int i = 0; i <= MAX_ANTRIAN; i++)
            {
                printf("%s", loket[i].nama);
            }
            printf("\nBanyaknya antrian di loket : %d\n", loket->antrian + 1);
        }
    }
}

int main()
{
    struct Loket loket[MAX_LOKET + 1] = {0};

    int pilihan, nomorLoket;

    do
    {
        system("clear");
        tampilkanStatus(loket);
        printf("1. Tambah antrian\n");
        printf("2. Hapus antrian\n");
        printf("3. Exit\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("Masukkan nomor loket: ");
            scanf("%d", &nomorLoket);
            if (nomorLoket >= 1 && nomorLoket <= MAX_LOKET)
            {
                tambahAntrian(loket, nomorLoket);
            }
            else
            {
                printf("Nomor loket tidak valid\n");
            }
            break;
        case 2:
            printf("Masukkan nomor loket: ");
            scanf("%d", &nomorLoket);
            if (nomorLoket >= 1 && nomorLoket <= MAX_LOKET)
            {
                hapusAntrian(loket, nomorLoket);
            }
            else
            {
                printf("Nomor loket tidak valid\n");
            }
            break;
        case 3:
            printf("Terima kasih!\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
            break;
        }

    } while (pilihan != 3);

    return 0;
}