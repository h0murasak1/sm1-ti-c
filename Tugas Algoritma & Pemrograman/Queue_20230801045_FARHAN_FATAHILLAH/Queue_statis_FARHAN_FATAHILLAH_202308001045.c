#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX_LOKET 5
#define MAX_ANTRIAN 3

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
        printf("Masukkan nama pelanggan: ");
        scanf("%s", loket[nomorLoket].antrian[loket[nomorLoket].jumlahAntrian].nama);
        loket[nomorLoket].jumlahAntrian++;
        printf("Antrian berhasil ditambahkan di loket %d\n", nomorLoket);
    }
    else
    {
        printf("Loket %d sudah mencapai batas antrian\n", nomorLoket);
    }
}

void hapusAntrian(struct Loket loket[], int nomorLoket)
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
    for (int i = 1; i <= MAX_LOKET; i++)
    {
        printf("LOKET [%d]: ", i);
        if (loket[i].jumlahAntrian == 0)
        {
            printf("\tTidak ada antrian\n");
        }
        else
        {
            for (int j = 0; j < loket[i].jumlahAntrian; j++)
            {
                printf("%s, ", loket[i].antrian[j].nama);
            }
            printf("\nBanyaknya Antrian Di Loket : %d\n", loket[i].jumlahAntrian);
        }
    }
}

int main()
{
    struct Loket loket[MAX_LOKET + 1] = {0};

    int pilihan, nomorLoket;
    
        printf("=================================\n");
        printf("Nama  : Fandi Fajar Maulana\n");
        printf("NIM   : 20230801157\n");
        printf("Email : fandifajar31@student.esaungul.ac.id\n");
        printf("=================================\n");
        printf("\n");
        printf("Tekan ENTER Untuk Melanjutkan.............\n");
        getchar();

    do
    {
        system("clear");
        printf("--- LATIHAN QUEUE STATIS ---\n\n");
        
        tampilkanStatus(loket);

        printf("\n");
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
            sleep(1);
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
            sleep(1);
            break;
        case 3:
            printf("Terima kasih!\n");
            sleep(1);
            break;
        default:
            printf("Pilihan tidak valid\n");
            sleep(1);
            break;
        }

        // Membersihkan buffer stdin setelah menggunakan scanf
        fflush(stdin);

    } while (pilihan != 3);

    return 0;
}
