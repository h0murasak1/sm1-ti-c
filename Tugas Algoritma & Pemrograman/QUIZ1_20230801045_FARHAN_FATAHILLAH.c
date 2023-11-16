#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int i;
int jam_kerja_perhari;
char nama[100], id[100], golongan_gaji[10], jabatan[100];
void delay_s() {
    usleep(10000);
}
void nakama() {
    printf("⣿⣿⣿⣿⡿⠛⠛⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠛⠛⢿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⠁⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠛⠛⠛⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠈⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⠋⠉⠁⠀⠀⠀⠀⢴⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠈⠉⠻⣿\n");
    delay_s();
    printf("⣿⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⠟⠁⣰⡆⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⡈⠻⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀⠀⠀⠀⠀⣿\n");
    delay_s();
    printf("⣿⣦⣄⣀⣤⣶⣄⠀⠀⠀⠀⠙⢿⡿⠃⠀⡾⠃⣰⠟⢠⡟⠀⠀⠀⠀⠀⠀⠀⠀⢿⡄⠈⢿⡀⠈⢿⡿⠋⠀⠀⠀⠀⣠⣶⣄⣀⣀⣴⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⢀⣿⣷⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣾⣷⣶⣾⣿⡄⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣼⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⣀⣴⣶⣶⣄⠀⠀⠀⠀⠀⠀⣠⣴⣶⣦⣄⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⢰⣿⣿⣿⣿⣿⣷⡄⠀⠀⢀⣾⣿⣿⣿⣿⣿⣇⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⢸⣿⣿⣿⣿⣿⣿⠇⠀⠀⠘⣿⣿⣿⣿⣿⣿⡿⠀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⠀⠻⠿⣿⣿⠿⠋⠀⠀⠀⠀⠘⠿⢿⣿⡿⠿⠃⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⠀⠀⠐⢿⣿⠇⠀⠀⠀⠀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⡿⠛⠲⠦⣤⣤⣤⣀⣀⣤⣤⣤⠴⠖⠛⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⢸⢧⣀⠀⢰⡇⠀⠈⠉⡏⠉⠀⢸⠀⠀⢀⣼⡇⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⣟⠀⠈⠉⣾⠳⠶⠤⣤⣧⠤⠴⢾⡗⠉⠉⠀⢇⠀⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⡿⠋⠉⠙⠻⠛⠁⠀⠀⠀⢀⡏⠑⢶⣤⡟⠀⠀⠀⠀⡇⠀⠀⠀⣷⣠⡴⠖⢻⠀⠀⠀⠀⠈⠻⠟⠋⠉⠙⢿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣷⠀⠀⠀⠈⠉⠛⠛⠛⠛⠛⠛⠋⠉⠀⠀⠀⣾⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣧⣀⣀⠀⠀⠀⠀⠐⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⠀⠀⠀⠀⢀⣀⣠⣾⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣼⣿⣿⣿⣿⣇⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    delay_s();
    printf("\t\tAplikasi Nakama V1.5\n");
}
void garis_pa() {
    for (i = 0; i < 50; i++) {
        fflush(stdout);
        printf("=");
        delay_s();
    }
    printf("\n");
}
void garis_pe() {
    for (i = 0; i < 25; i++) {
        printf("=");
    }
    printf("\n");
}
void clear() {
    printf("\033[2J\033[1;1H");
}
void delay_1() {
    usleep(1000000);
}

int main() {
    int pilihan;
    int berhasil;
    int berhasil_2;
    
    int menu_awal = 1;
    while (menu_awal) {
        awal:
        fflush(stdout);
        clear();
        garis_pa();
        printf("\t\tAplikasi Nakama V1.5\n");
        nakama();
        delay_s();
        garis_pa();
        printf("1. Program Inputan Data Pergawai\n");
        printf("2. Program Hitung Biaya Parkir\n");
        printf("3. Keluar\n");
        garis_pa();

        printf("Pilih menu: ");

        berhasil = scanf("%d", &pilihan);

        if(berhasil != 1 || getchar() != '\n' || pilihan < 1 || pilihan > 3){
            printf("\n");
            printf("Input tidak valid. masukkan angka antara 1 dan 3\n");
            delay_1();
            fflush(stdin);
            printf("Tekan Enter untuk lanjut...");
            getchar();
            goto awal;
        }

        switch (pilihan) {
            case 1:
                menu_1:
                clear();
                garis_pa();
                printf("\nProfil Pembuat Program:\n\n");
                garis_pa();
                    
                printf("ID                : ");
				scanf("%s", id);

				printf("Nama              : ");
				scanf("%s", nama);
				
				printf("Jabatan           : ");
				scanf("%s", jabatan);
				
				printf("Jam Kerja Perhari : ");
				scanf("%d", &jam_kerja_perhari);
				
				printf("Golongan Gaji     : ");
				scanf("%s", golongan_gaji);
                garis_pa();
				fflush(stdin); // Membersihkan input buffer
				printf("\n");
                printf("\n");
                garis_pa();
			    printf("Data Pekerja\n");
                garis_pa();
			    printf("Nama: %s\n", nama);
			    printf("ID: %s\n", id);
			    printf("Jam Kerja Perhari: %d\n", jam_kerja_perhari);
				printf("Golongan Gaji: %s\n", golongan_gaji);
                break;
            case 2:
                menu_2:
                printf("\n");
                int jam_masuk, menit_masuk, jam_keluar, menit_keluar;
                int biaya_parkir;
                clear();
                printf("Masukkan jam masuk (hh mm): ");
                if (scanf("%d %d", &jam_masuk, &menit_masuk) != 2) {
                    printf("input tidak boleh karakter\n");
                    fflush(stdin);
                    goto menu_2;
                    break;
                }

                // Meminta pengguna memasukkan jam keluar
                printf("Masukkan jam keluar (hh mm): ");
                if (scanf("%d %d", &jam_keluar, &menit_keluar) != 2) {
                    printf("input tidak boleh karakter\n");
                    fflush(stdin);
                    goto menu_2;
                    break;
                }

                // Menghitung lama parkir dalam jam
                int lama_parkir = (jam_keluar - jam_masuk) + ((menit_keluar - menit_masuk) / 60);

                // Menghitung biaya parkir
                if (lama_parkir <= 0) {
                    printf("Jam keluar harus lebih dari jam masuk.\n");
                } else if (lama_parkir == 1) {
                    biaya_parkir = 2000;
                } else if (lama_parkir == 2) {
                    biaya_parkir = 1000;
                } else if (lama_parkir == 3) {
                    biaya_parkir = 1000;
                } else {
                    // Biaya parkir lebih dari 3 jam
                    biaya_parkir = 4000 + (lama_parkir - 3) * 500;
                }
                
                // Menampilkan lama parkir dan biaya parkir
                printf("Lama parkir: %d jam %d menit\n", lama_parkir, (menit_keluar - menit_masuk) % 60);
                printf("Biaya parkir: %d\n", biaya_parkir);
                break;
            case 3:
                printf("Terima Kasih.....\n");
                return 0;
                break;
        }
        
        int menu_akhir = 1;
        while (menu_akhir) {
        garis_pe();
        printf("MENU PILIHAN\n");
        garis_pe();
        printf("1. Kembali Ke Menu Awal\n");
        printf("2. Keluar Dari Aplikasi\n");
        printf("Masukkan Pilihan Anda (1/2): ");
        int pilihanMenu;
        berhasil_2 = scanf("%d", &pilihanMenu);

        if(berhasil_2 != 1 || getchar() != '\n' || pilihanMenu < 1 || pilihanMenu > 2){
            printf("\n");
            printf("Input tidak valid. masukkan angka antara 1 dan 2\n");
            delay_1();
            fflush(stdin);
            printf("Tekan Enter untuk lanjut...");
            getchar();
            goto awal;
        }
    
        switch (pilihanMenu) {
            case 1:
                menu_akhir = 0;
                menu_awal = 1;
                break;
            case 2:
                menu_akhir = 0;
                menu_awal = 0;
                printf("Terima Kasih.....");
                return 0;
                break;
            
                
        }
    }
        //printf("Tekan Enter untuk melanjutkan...");
        //getchar(); // Tunggu tombol Enter
        //getchar(); // Hapus karakter input baru dari buffer
    }
}