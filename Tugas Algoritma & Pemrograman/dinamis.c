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

struct Barber {
    struct Antrian antrian[MAX_ANTRIAN];
    int jumlahAntrian;
    int pendapatan[3];  // Pendapatan dari eksekutor Anti, Bella, Citra
    int pendapatanMitra;  // Pendapatan dari Mitra
};

void tampilkanHeader() {
    printf("\n-------------------------------\n");
    printf("\n        BARBER HYTAM\n");
    printf("     Kp. Sodonk Ds. Sodonk \n\n");
    printf("---------------------------------\n");
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

void tambahAntrian(struct Barber *Barber, const char *nama) {
    if (Barber->jumlahAntrian < MAX_ANTRIAN) {
        struct Antrian newAntrian;
        
        // Mencari nomor antrian tertinggi
        int nomorTertinggi = 0;
        for (int i = 0; i < Barber->jumlahAntrian; i++) {
            if (Barber->antrian[i].nomorAntrian > nomorTertinggi) {
                nomorTertinggi = Barber->antrian[i].nomorAntrian;
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

        Barber->antrian[Barber->jumlahAntrian] = newAntrian;
        Barber->jumlahAntrian++;

        printf("No. Antrian : %d\n", newAntrian.nomorAntrian);
        printf("Nama        : %s\n", newAntrian.nama);
    } else {
        printf("Antrian penuh. Tidak dapat menambahkan antrian baru.\n");
    }
}

void hapusAntrian(struct Barber *Barber) {
     if (Barber->jumlahAntrian > 0) {
        printf("Eksekutor :\n");
        printf("1. Anti\n");
        printf("2. Bella\n");
        printf("3. Citra\n");

        int pilihan;
        printf("Pilihan Eksekutor: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 3) {
            struct Antrian removedAntrian = Barber->antrian[0];
            printf("\n-------------------------------\n");
            printf("No. Antrian : %d\n", removedAntrian.nomorAntrian);
            printf("Nama        : %s\n", removedAntrian.nama);
            printf("Eksekutor   : %s\n", removedAntrian.eksekutor);
            printf("-------------------------------\n");

            // Perbarui pendapatan eksekutor
            if (strcmp(removedAntrian.eksekutor, "Anti") == 0) {
                Barber->pendapatan[0] += 12000;
                Barber->pendapatanMitra += 8000;
            } else if (strcmp(removedAntrian.eksekutor, "Bella") == 0) {
                Barber->pendapatan[1] += 12000;
                Barber->pendapatanMitra += 8000;
            } else if (strcmp(removedAntrian.eksekutor, "Citra") == 0) {
                Barber->pendapatan[2] += 12000;
                Barber->pendapatanMitra += 8000;
            }

        	// Geser antrian ke depan setelah menghapus
        	for (int i = 0; i < Barber->jumlahAntrian - 1; i++) {
            	Barber->antrian[i] = Barber->antrian[i + 1];
        	}
        	Barber->jumlahAntrian--;

        	// Perbarui nomor antrian setelah penghapusan
        	/*for (int i = 0; i < Barber->jumlahAntrian; i++) {
            	Barber->antrian[i].nomorAntrian = i + 1;
        	}*/
        } else {
            printf("Pilihan eksekutor tidak valid.\n");
        }
    } else {
        printf("Antrian kosong. Tidak ada antrian untuk dihapus.\n");
    }
}


void daftarTunggu(const struct Barber *Barber) {
    printf("------- Data Antrian -------\n\n");
    for (int i = 0; i < Barber->jumlahAntrian; i++) {
        printf("No. Antrian  : %d\n", Barber->antrian[i].nomorAntrian);
        printf("Nama      : %s\n", Barber->antrian[i].nama);
        printf("Sisa Antrian : %d\n\n", Barber->jumlahAntrian + i - 1);
        printf("----------------------------\n");
    }
}

void tampilkanPendapatan(const struct Barber *Barber) {
    printf("-------- Pendapatan --------\n");
    printf("keuntungan Mitra        :Rp. %d,-\n", Barber->pendapatanMitra);
    printf("- Anti    :Rp. %d,-\n", Barber->pendapatan[0]);
    printf("- Bella   :Rp. %d,-\n", Barber->pendapatan[1]);
    printf("- Citra   :Rp. %d,-\n", Barber->pendapatan[2]);
    printf("----------------------------\n");
}

int main() {
    struct Barber Barber;
    Barber.jumlahAntrian = 0;
    Barber.pendapatan[0] = 0;  // Pendapatan Anti
    Barber.pendapatan[1] = 0;  // Pendapatan Bella
    Barber.pendapatan[2] = 0;  // Pendapatan Citra
    Barber.pendapatanMitra = 0;  // Pendapatan Mitra

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
                tambahAntrian(&Barber, nama);
                break;

            case 2:
                hapusAntrian(&Barber);
                break;

            case 3:
                daftarTunggu(&Barber);
                break;

            case 4:
                tampilkanPendapatan(&Barber);
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

