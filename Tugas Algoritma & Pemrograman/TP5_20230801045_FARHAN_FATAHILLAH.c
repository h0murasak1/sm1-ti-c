#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
int i, j, tinggi, berhasil, berhasil_2;
// kumpulan integer

void delay_s()
{
    usleep(8000);
}
void nakama()
{
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
void garis_pa()
{
    for (i = 0; i < 50; i++)
    {
        fflush(stdout);
        printf("#");
        delay_s();
    }
    printf("\n");
}
void garis_pe()
{
    for (i = 0; i < 25; i++)
    {
        printf("#");
    }
    printf("\n");
}
void clear()
{
    printf("\033[2J\033[1;1H");
}
void delay_1()
{
    usleep(1000000);
}

int main()
{
    int pilihan;

    int menu_awal = 1;
    while (menu_awal)
    {
    awal:
        fflush(stdout);
        clear();
        garis_pa();
        printf("\t\tAplikasi Nakama V2\n");
        nakama();
        delay_s();
        garis_pa();
        printf("1. Pembuat program\n");
        printf("2. Trapesium\n");
        printf("3. Jam Pasir\n");
        printf("4. Logo 'M'\n");
        printf("5. Keluar\n");
        garis_pa();

        printf("Pilih menu: ");

        berhasil = scanf("%d", &pilihan);

        if (berhasil != 1 || getchar() != '\n' || pilihan < 1 || pilihan > 5)
        {
            printf("\n");
            printf("Input tidak valid. masukkan angka antara 1 dan 5\n");
            delay_1();
            fflush(stdin);
            printf("Tekan Enter untuk lanjut...");
            getchar();
            goto awal;
        }

        switch (pilihan)
        {
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
            garis_pa();
            printf("Program Trapesium\n");
            garis_pa();
            printf("Masukkan angka : ");
            berhasil = scanf("%d", &tinggi);

            if (berhasil != 1 || getchar() != '\n' || tinggi < 1)
            {
                printf("\n");
                printf("Input tidak valid.\n");
                delay_1();
                fflush(stdin);
                printf("Tekan Enter untuk lanjut...");
                getchar();
                goto menu_2;
            }

            for (i = 1; i <= tinggi; i++)
            {
                for (j = tinggi; j > i; j--)
                {
                    printf("  ");
                }
                for (j = 1; j <= i; j++)
                {
                    printf(" *");
                }
                for (j = 1; j <= tinggi; j++)
                {
                    printf(" ^");
                }
                for (j = 1; j <= i; j++)
                {
                    printf(" *");
                }
                printf("\n");
            }
            break;
        case 3:
        menu_3:
            clear();
            int i, j, tinggi, spasi;
            garis_pa();
            printf("Program Jam Pasir\n");
            garis_pa();
            printf("Masukkan tinggi pola (bilangan ganjil): ");
            berhasil = scanf("%d", &tinggi);

            if (berhasil != 1 || getchar() != '\n' || tinggi < 1 || tinggi % 2 == 0)
            {
                printf("\n");
                printf("Input tidak valid.\n");
                delay_1();
                fflush(stdin);
                printf("Tekan Enter untuk lanjut...");
                getchar();
                goto menu_3;
            }

            for (i = 1; i <= tinggi - (1 + i); i++)
            {
                // Cetak karakter '*' atau '-' sesuai dengan indeks input
                for (j = 1; j <= tinggi; j++)
                {
                    if (i <= tinggi / 2)
                    {
                        if (j == 1 || j == tinggi || i == 1)
                        {
                            printf(" *");
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                }
                printf("\n");
            }

            for (i = 0; i < tinggi; i++)
            {
                // Mencetak tanda minus (-)
                for (j = 0; j < i; j++)
                {
                    printf(" ");
                }

                // Mencetak tanda minus (-)
                for (j = 0; j < tinggi - i; j++)
                {
                    printf(" -");
                }

                printf("\n");
            }

            for (i = tinggi - 1; i >= 0; i--)
            {
                // Mencetak tanda minus (-)
                for (j = 0; j < i; j++)
                {
                    printf(" ");
                }

                // Mencetak tanda minus (-)
                for (j = 1; j <= tinggi - i; j++)
                {
                    printf(" -");
                }
                printf("\n");
            }
            for (i = tinggi / 2 + 2; i <= tinggi; i++)
            {
                for (j = 1; j <= tinggi; j++)
                {
                    if (i == tinggi || j == 1 || j == tinggi)
                    {
                        printf(" *");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 4:
        menu_4:
            clear();
            garis_pe();
            printf("Logo 'M'\n");
            garis_pe();

            printf("Masukkan tinggi huruf M: ");
            berhasil = scanf("%d", &tinggi);

            if (berhasil != 1 || getchar() != '\n' || tinggi < 1)
            {
                printf("\n");
                printf("Input tidak valid.\n");
                delay_1();
                fflush(stdin);
                printf("Tekan Enter untuk lanjut...");
                getchar();
                goto menu_4;
            }

            for (i = 0; i < tinggi; i++)
            {
                for (j = 0; j < tinggi * 2 - 1; j++)
                {
                    if (j == 0 || j == tinggi * 2 - 2 || (i == j && j <= tinggi - 1) || (j == tinggi * 2 - 2 - i && j >= tinggi))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        case 5:
            printf("Terima Kasih.....\n");
            return 0; // Keluar dari program
            /*default:
                printf("Pilihan tidak valid.\n");
                //return 1;
                break;*/
        }

        int menu_akhir = 1;
        while (menu_akhir)
        {
            menu_akhir:
            garis_pe();
            printf("MENU PILIHAN\n");
            garis_pe();
            printf("1. Kembali Ke Menu Awal\n");
            printf("2. Keluar Dari Aplikasi\n");
            printf("Masukkan Pilihan Anda (1/2): ");
            int pilihanMenu;
            berhasil_2 = scanf("%d", &pilihanMenu);

            if (berhasil_2 != 1 || getchar() != '\n' || pilihanMenu < 1 || pilihanMenu > 2)
            {
                clear();
                printf("\n");
                printf("Input tidak valid. masukkan angka antara 1 dan 2\n");
                delay_1();
                fflush(stdin);
                printf("Tekan Enter untuk lanjut...");
                getchar();
                goto menu_akhir;
            }

            switch (pilihanMenu)
            {
            case 1:
                goto awal;
                break;
            case 2:
                printf("Terima Kasih.....");
                delay_1();
                return 0;
                break;
            }
        }
        // printf("Tekan Enter untuk melanjutkan...");
        // getchar(); // Tunggu tombol Enter
        // getchar(); // Hapus karakter input baru dari buffer
    }
}