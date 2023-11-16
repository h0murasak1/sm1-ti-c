#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

//kumpulan integer
int i;
int n;
int j = 0;
int k = 0;

void delay_s() {
    usleep(8000);
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
    printf("\t\tAplikasi Nakama V1\n");
}
void garis_pa() {
    for (i = 0; i < 50; i++) {
        fflush(stdout);
        printf("#");
        delay_s();
    }
    printf("\n");
}
void garis_pe() {
    for (i = 0; i < 25; i++) {
        printf("#");
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
        printf("\t\tAplikasi Nakama V1\n");
        nakama();
        delay_s();
        garis_pa();
        printf("1. Pembuat program\n");
        printf("2. Penjumlahan Deret\n");
        printf("3. Menampilkan Banyak Bilangan\n");
        printf("4. Rata-Rata\n");
        printf("5. Faktorial\n");
        printf("6. Deret Mundur\n");
        printf("7. Keluar\n");
        garis_pa();

        printf("Pilih menu: ");

        berhasil = scanf("%d", &pilihan);

        if(berhasil != 1 || getchar() != '\n' || pilihan < 1 || pilihan > 7){
            printf("\n");
            printf("Input tidak valid. masukkan angka antara 1 dan 7\n");
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
                printf("Nama  : Farhan fatahillah\n");
                printf("NIM   : 20230801045\n");
                printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
                garis_pa();
                break;
            case 2:
                menu_2:
                clear();
                    int hsl = 0;

                    printf("Masukkan jumlah elemen deret: ");
                    berhasil = scanf("%d", &n);

                    if(berhasil != 1 || getchar() != '\n' || i < 1){
                        printf("\n");
                        printf("Input Tidak Boleh Karakter / Kurang Dari 0\n");
                        delay_1();
                        fflush(stdin);
                        printf("Tekan Enter untuk lanjut...");
                        getchar();
                    goto menu_2;
                    }
                    else {
                    printf("1");
                    for (i = 2; i <= n; i++) {
                        printf(" + %d", i);
                        hsl += i;
                    }
                    printf(" = %d\n", hsl);
                    }

                break;
            case 3:
                menu_3:
                clear();
                int angka_awal, angka_akhir;
                int genap_count = 0, ganjil_count = 0, kelipatan_7_count = 0;

                printf("Masukkan Angka Awal: ");
                berhasil = scanf("%d", &angka_awal);

                if(berhasil != 1 || getchar() != '\n' || angka_awal < 1){
                    printf("\n");
                    printf("Input Tidak Boleh Karakter / Kurang Dari 0\n");
                    delay_1();
                    fflush(stdin);
                    printf("Tekan Enter untuk lanjut...");
                    getchar();
                    goto menu_3;
                }
                printf("Masukkan Angka Akhir: ");
                berhasil = scanf("%d", &angka_akhir);

                if(berhasil != 1 || getchar() != '\n' || angka_akhir < 1){
                    printf("\n");
                    printf("Input Tidak Boleh Karakter / Kurang Dari 0\n");
                    delay_1();
                    fflush(stdin);
                    printf("Tekan Enter untuk lanjut...");
                    getchar();
                    goto menu_3;
                }
                else 
                {
                    printf("\nBilangan Genap\n");
                    for (i = angka_awal; i <= angka_akhir; i++) {
                        if (i % 2 == 0) {
                            printf("%d ", i);
                            genap_count++;
                        }  
                    }
    
                    printf("\n\nBilangan Ganjil\n");
                    for (int i = angka_awal; i <= angka_akhir; i++) {
                        if (i % 2 != 0) {
                            printf("%d ", i);
                            ganjil_count++;
                        }
                    }
    
                    printf("\n\nKelipatan 7\n");
                    for (i = angka_awal; i <= angka_akhir; i++) {
                        if (i % 7 == 0) {
                            printf("%d ", i);
                            kelipatan_7_count++;
                        }
                    }
    
                    printf("\n\nJumlah Genap: %d\n", genap_count);
                    printf("Jumlah Ganjil: %d\n", ganjil_count);
                    printf("Jumlah Kelipatan 7: %d\n", kelipatan_7_count);
                }
                break;
            case 4:
                menu_4:
                clear();
                garis_pe();
                printf("Program Menghitung Rata-Rata\n");
                garis_pe();
                printf("\n");
                float summ = 0.0;

                printf("Masukkan jumlah bilangan yang ingin dihitung rata-ratanya: ");
                berhasil = scanf("%d", &k);

                if(berhasil != 1 || getchar() != '\n' || k < 1){
                    printf("\n");
                    printf("Inputan Harus Berupa Angka / Tidak Boleh Lebih kecil Dari 1\n");
                    delay_1();
                    fflush(stdin);
                    printf("Tekan Enter untuk lanjut...");
                    getchar();
                    goto menu_4;
                }
                else {
                if (k <= 0) {
                    printf("Jumlah harus lebih dari 0.\n");
                    break; // Lanjutkan pemilihan menu
                }

                for (i = 1; i <= k; i++) {
                    float num;
                    printf("Masukkan Bilangan ke-%d :", i);
                    berhasil = scanf("%f", &num);
                    summ += num;

                    if(berhasil != 1 || getchar() != '\n' || i < 1){
                        printf("\n");
                        printf("Inputan Harus Berupa Angka\n");
                        delay_1();
                        fflush(stdin);
                        printf("Tekan Enter untuk lanjut...");
                        getchar();
                        goto menu_4;
                }
                    
                }

                float rata_rata = summ / k;
                printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", k, rata_rata);
                }
                break;
            case 5:
                menu_5:
                clear();
                garis_pe();
                printf("Program Menghitung Faktorial\n");
                garis_pe();
                printf("\n");
                int angka = 0;
                long long faktorial = 1;

                printf("Masukkan angka: ");
                berhasil = scanf("%d", &angka);

                if(berhasil != 1 || getchar() != '\n' || angka < 1){
                    printf("\n");
                    printf("Inputan Harus Berupa Angka\n");
                    delay_1();
                    fflush(stdin);
                    printf("Tekan Enter untuk lanjut...");
                    getchar();
                    goto menu_5;
                } else if (angka < 0) {
                    // Periksa jika input adalah bilangan negatif
                    printf("Angka harus non-negatif.\n");
                } else {
                    printf("Faktorial dari %d! adalah: ", angka);

                    // Hitung faktorial dari besar ke kecil
                    for (i = angka; i >= 1; --i) {
                        faktorial *= i;
                        // Cetak urutan angka dengan tanda seru
                        if (i > 1) {
                            printf("%d * ", i);
                        } else {
                            printf("%d = %lld\n", i, faktorial);
                        }
                    }
                }
                break;
            case 6:
                menu_6:
                clear();
                printf("\n");
                printf("Masukkan jumlah input: ");
                berhasil = scanf("%d", &n);

                if(berhasil != 1 || getchar() != '\n' || n < 1){
                    printf("\n");
                    printf("Inputan Harus Berupa Angka\n");
                    delay_1();
                    fflush(stdin);
                    printf("Tekan Enter untuk lanjut...");
                    getchar();
                    goto menu_6;
                }else {
                    k = n * n; // rumus jumlah deret aritmatika
                    //n[4] *= 2;
                    for (i = 1; i <= n * 2; i += 2) {
                        for (j = 1; j <= i; j++) {
                        printf("%d ", k);
                        k--;
                        }
                        printf("\n");
                    }
                }
                break;
            case 7:
                printf("Terima Kasih.....\n");
                return 0; // Keluar dari program
            /*default:
                printf("Pilihan tidak valid.\n");
                //return 1;
                break;*/
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