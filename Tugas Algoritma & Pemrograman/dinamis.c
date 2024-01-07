#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMA 50
#define MAX_ANTRIAN 10

struct Antrian {
    int nomorAntrian;
    char nama[MAX_NAMA];
    char eksekutor[MAX_NAMA];
};

struct BarberShop {
    struct Antrian antrian[MAX_ANTRIAN];
    int jumlahAntrian;
    int pendapatan[3];  // Pendapatan dari eksekutor Anti, Bella, Citra
    int pendapatanMitra;  // Pendapatan dari Mitra
};

void tampilkanHeader() {
    printf("\n-------------------------------\n");
    printf("\n        Barber Pop\n");
    printf("Jl. Perhatian Blok I No. 3U\n\n");
    printf("-------------------------------\n");
}

void tampilkanMenu() {
    printf("    --------MENU-------\n");
    printf("     1. Daftar Antrian\n");
    printf("     2. Hapus\n");
    printf("     3. Daftar Tunggu\n");
    printf("     4. Pendapatan\n");
    printf("     5. Keluar\n\n");
    printf("-------------------------------\n\n");
}

void tambahAntrian(struct BarberShop *barberShop, const char *nama) {
    if (barberShop->jumlahAntrian < MAX_ANTRIAN) {
        struct Antrian newAntrian;
        
        // Mencari nomor antrian tertinggi
        int nomorTertinggi = 0;
        for (int i = 0; i < barberShop->jumlahAntrian; i++) {
            if (barberShop->antrian[i].nomorAntrian > nomorTertinggi) {
                nomorTertinggi = barberShop->antrian[i].nomorAntrian;
            }
        }

        newAntrian.nomorAntrian = nomorTertinggi + 1;
        strncpy(newAntrian.nama, nama, MAX_NAMA - 1);

        // Set eksekutor berdasarkan urutan antrian
        if (newAntrian.nomorAntrian % 3 == 1) {
            strncpy(newAntrian.eksekutor, "Anti", MAX_NAMA - 1);
        } else if (newAntrian.nomorAntrian % 3 == 2) {
            strncpy(newAntrian.eksekutor, "Bella", MAX_NAMA - 1);
        } else {
            strncpy(newAntrian.eksekutor, "Citra", MAX_NAMA - 1);
        }

        barberShop->antrian[barberShop->jumlahAntrian] = newAntrian;
        barberShop->jumlahAntrian++;

        printf("No. Antrian : %d\n", newAntrian.nomorAntrian);
        printf("Nama        : %s\n", newAntrian.nama);
    } else {
        printf("Antrian penuh. Tidak dapat menambahkan antrian baru.\n");
    }
}

void hapusAntrian(struct BarberShop *barberShop) {
     if (barberShop->jumlahAntrian > 0) {
        printf("Eksekutor :\n");
        printf("1. Anti\n");
        printf("2. Bella\n");
        printf("3. Citra\n");

        int pilihan;
        printf("Pilihan Eksekutor: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 3) {
            struct Antrian removedAntrian = barberShop->antrian[0];
            printf("\n-------------------------------\n");
            printf("No. Antrian : %d\n", removedAntrian.nomorAntrian);
            printf("Nama        : %s\n", removedAntrian.nama);
            printf("Eksekutor   : %s\n", removedAntrian.eksekutor);
            printf("-------------------------------\n");

            // Perbarui pendapatan eksekutor
            if (strcmp(removedAntrian.eksekutor, "Anti") == 0) {
                barberShop->pendapatan[0] += 12000;
                barberShop->pendapatanMitra += 8000;
            } else if (strcmp(removedAntrian.eksekutor, "Bella") == 0) {
                barberShop->pendapatan[1] += 12000;
                barberShop->pendapatanMitra += 8000;
            } else if (strcmp(removedAntrian.eksekutor, "Citra") == 0) {
                barberShop->pendapatan[2] += 12000;
                barberShop->pendapatanMitra += 8000;
            }

        	// Geser antrian ke depan setelah menghapus
        	for (int i = 0; i < barberShop->jumlahAntrian - 1; i++) {
            	barberShop->antrian[i] = barberShop->antrian[i + 1];
        	}
        	barberShop->jumlahAntrian--;

        	// Perbarui nomor antrian setelah penghapusan
        	for (int i = 0; i < barberShop->jumlahAntrian; i++) {
            	barberShop->antrian[i].nomorAntrian = i + 1;
        	}
        } else {
            printf("Pilihan eksekutor tidak valid.\n");
        }
    } else {
        printf("Antrian kosong. Tidak ada antrian untuk dihapus.\n");
    }
}


void daftarTunggu(const struct BarberShop *barberShop) {
    printf("------- Data Antrian -------\n\n");
    for (int i = 0; i < barberShop->jumlahAntrian; i++) {
        printf("No. Antrian  : %d\n", barberShop->antrian[i].nomorAntrian);
        printf("Nama      : %s\n", barberShop->antrian[i].nama);
        printf("Sisa Antrian : %d\n\n", barberShop->jumlahAntrian + i - 1);
        printf("----------------------------\n");
    }
}

void tampilkanPendapatan(const struct BarberShop *barberShop) {
    printf("-------- Pendapatan --------\n");
    printf("keuntungan Mitra        :Rp. %d,-\n", barberShop->pendapatanMitra);
    printf("- Anti    :Rp. %d,-\n", barberShop->pendapatan[0]);
    printf("- Bella   :Rp. %d,-\n", barberShop->pendapatan[1]);
    printf("- Citra   :Rp. %d,-\n", barberShop->pendapatan[2]);
    printf("----------------------------\n");
}

int main() {
    struct BarberShop barberShop;
    barberShop.jumlahAntrian = 0;
    barberShop.pendapatan[0] = 0;  // Pendapatan Anti
    barberShop.pendapatan[1] = 0;  // Pendapatan Bella
    barberShop.pendapatan[2] = 0;  // Pendapatan Citra
    barberShop.pendapatanMitra = 0;  // Pendapatan Mitra

    int menu;
    char nama[MAX_NAMA];

    do {
        tampilkanHeader();
        tampilkanMenu();

        printf("Masukkan Pilihan: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Masukkan nama untuk menambah antrian: ");
                scanf("%s", nama);
                tambahAntrian(&barberShop, nama);
                break;

            case 2:
                hapusAntrian(&barberShop);
                break;

            case 3:
                daftarTunggu(&barberShop);
                break;

            case 4:
                tampilkanPendapatan(&barberShop);
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

    return 0;
}

