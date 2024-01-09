#include "lib.queue.h"

#define MAX_NAMA 50
#define MAX_QUEUE 5

struct Antrian
{
    int nomorAntrian;
    char nama[MAX_NAMA];
    char eksekutor[MAX_NAMA];
};

struct BarberShop
{
    struct Antrian antrian[MAX_QUEUE];
    int jumlahAntrian;
    int pendapatan[3];   // Pendapatan dari eksekutor Fuad, Faiz, Agus
    int pendapatanMitra; // Pendapatan dari Mitra
};

void tampilkanHeader()
{
    printf("\n-----------------------------------\n");
    printf("\n         BARBER HYTAM\n");
    printf(" Jl. SODONK DS. SODONK. KP. SODONK\n\n");
    printf("-------------------------------------\n");
}

void tampilkanMenu()
{
    printf("    --------MENU-------\n");
    printf("     1. Daftar Antrian\n");
    printf("     2. Eksekusi\n");
    printf("     3. Daftar Tunggu\n");
    printf("     4. Pendapatan\n");
    printf("     5. Keluar\n\n");
    printf("-------------------------------\n\n");
}

void tambahAntrian(struct BarberShop *BarberShop, const char *nama)
{
    if (BarberShop->jumlahAntrian < MAX_QUEUE)
    {
        struct Antrian newAntrian;

        // Mencari nomor antrian tertinggi
        int nomorTertinggi = 0;
        for (int i = 0; i < BarberShop->jumlahAntrian; i++)
        {
            if (BarberShop->antrian[i].nomorAntrian > nomorTertinggi)
            {
                nomorTertinggi = BarberShop->antrian[i].nomorAntrian;
            }
        }

        newAntrian.nomorAntrian = nomorTertinggi + 1;
        strncpy(newAntrian.nama, nama, MAX_NAMA - 1);

        // Set eksekutor berdasarkan urutan antrian
        if (newAntrian.nomorAntrian % 3 == 1)
        {
            strncpy(newAntrian.eksekutor, "Fuad", MAX_NAMA - 1);
        }
        else if (newAntrian.nomorAntrian % 3 == 2)
        {
            strncpy(newAntrian.eksekutor, "Faiz", MAX_NAMA - 1);
        }
        else
        {
            strncpy(newAntrian.eksekutor, "Agus", MAX_NAMA - 1);
        }

        BarberShop->antrian[BarberShop->jumlahAntrian] = newAntrian;
        BarberShop->jumlahAntrian++;

        printf("No. Antrian : %d\n", newAntrian.nomorAntrian);
        printf("Nama        : %s\n", newAntrian.nama);
    }
    else
    {
        printf("Antrian penuh. Tidak dapat menambahkan antrian baru.\n");
    }
}

void hapusAntrian(struct BarberShop *BarberShop)
{
    if (BarberShop->jumlahAntrian > 0)
    {
        printf("Eksekutor :\n");
        printf("1. Fuad\n");
        printf("2. Faiz\n");
        printf("3. Agus\n");

        int pilihan;
        printf("Pilihan Eksekutor: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            BarberShop->pendapatan[0] += 12000;
            BarberShop->pendapatanMitra += 8000;
            break;

        case 2:
            BarberShop->pendapatan[1] += 12000;
            BarberShop->pendapatanMitra += 8000;
            break;

        case 3:
            BarberShop->pendapatan[2] += 12000;
            BarberShop->pendapatanMitra += 8000;
            break;
        }

        if (pilihan >= 1 && pilihan <= 3)
        {
            struct Antrian removedAntrian = BarberShop->antrian[0];
            printf("\n-------------------------------\n");
            printf("No. Antrian : %d\n", removedAntrian.nomorAntrian);
            printf("Nama        : %s\n", removedAntrian.nama);
            printf("Eksekutor   : %s\n", removedAntrian.eksekutor);
            printf("-------------------------------\n");

            // Geser antrian ke depan setelah menghapus
            for (int i = 0; i < BarberShop->jumlahAntrian - 1; i++)
            {
                BarberShop->antrian[i] = BarberShop->antrian[i + 1];
            }
            BarberShop->jumlahAntrian--;

            // Perbarui nomor antrian setelah penghapusan
            /*for (int i = 0; i < BarberShop->jumlahAntrian; i++) {
                BarberShop->antrian[i].nomorAntrian = i + 1;
            }*/
        }
        else
        {
            printf("Pilihan eksekutor tidak valid.\n");
        }
    }
    else
    {
        printf("Antrian kosong. Tidak ada antrian untuk dihapus.\n");
    }
}

void daftarTunggu(const struct BarberShop *BarberShop)
{
    printf("------- Data Antrian -------\n\n");
    for (int i = 0; i < BarberShop->jumlahAntrian; i++)
    {
        printf("No. Antrian     : %d\n", BarberShop->antrian[i].nomorAntrian);
        printf("Nama            : %s\n", BarberShop->antrian[i].nama);
        printf("Sisa Antrian    : %d\n\n", i);
        printf("----------------------------\n");
    }
}

void tampilkanPendapatan(const struct BarberShop *BarberShop)
{
    printf("------------------ Pendapatan ------------------\n");
    printf("keuntungan Raja Hytam   :Rp. %d,-\n", BarberShop->pendapatanMitra);
    printf("- Fuad                  :Rp. %d,-\n", BarberShop->pendapatan[0]);
    printf("- Faiz                  :Rp. %d,-\n", BarberShop->pendapatan[1]);
    printf("- Agus                  :Rp. %d,-\n", BarberShop->pendapatan[2]);
    printf("------------------------------------------------\n");
}

void main_queue()
{
    struct BarberShop BarberShop;
    BarberShop.jumlahAntrian = 0;
    BarberShop.pendapatan[0] = 0;   // Pendapatan Fuad
    BarberShop.pendapatan[1] = 0;   // Pendapatan Faiz
    BarberShop.pendapatan[2] = 0;   // Pendapatan Agus
    BarberShop.pendapatanMitra = 0; // Pendapatan Raja Hytam

    int menu;
    char nama[MAX_NAMA];

    do
    {
        tampilkanHeader();
        tampilkanMenu();

        printf("Masukkan Pilihan: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Masukkan nama untuk menambah antrian: ");
            scanf("%s", nama);
            tambahAntrian(&BarberShop, nama);
            break;

        case 2:
            hapusAntrian(&BarberShop);
            break;

        case 3:
            daftarTunggu(&BarberShop);
            break;

        case 4:
            tampilkanPendapatan(&BarberShop);
            break;

        case 5:
            printf("Keluar dari program.\n");
            break;

        default:
            printf("Opsi tidak valid. Silakan masukkan opsi yang benar.\n");
            break;
        }

        printf("\nPress any key to continue . . .");
        getchar(); // Menunggu enter
        getchar(); // Menunggu enter lagi

    } while (menu != 5);
}