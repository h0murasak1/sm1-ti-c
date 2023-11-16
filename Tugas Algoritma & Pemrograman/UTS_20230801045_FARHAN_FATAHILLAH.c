#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int n, i, jumlah = 0, jumlah_genap;
int bilangan;
int rata_rata_genap;
int i, j, n;
int pilihan;
int ulangi;
void clear()
{
    printf("\033[2J\033[1;1H");
}

int main()
{
    bool ulangi = true;
    printf("=================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();
    do
    {
        fflush(stdin);
        fflush(stdout);
        clear();
        printf("\b========== SELAMAT DATANG ==========\n\n");
        printf("1. Menghitung Rata-Rata Bilangan Genap\n");
        printf("2. Bintang Angka\n");
        printf("3. Menghitung Kardus Keluar\n");
        printf("4. Keluar\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:

            jumlah_genap = 0;
            rata_rata_genap = 0;
            printf("Masukkan n: ");
            scanf("%d", &n);

            // Membaca bilangan dan menghitung jumlah genap
            for (i = 0; i < n; i++)
            {
                printf("Masukkan bilangan ke-%d: ", i + 1);
                scanf("%d", &bilangan);

                if (bilangan % 2 == 0)
                {
                    jumlah_genap += bilangan;
                }

                jumlah += bilangan;
            }

            // Menghitung rata-rata genap
            if (n > 0)
            {
                rata_rata_genap = (int)jumlah_genap / 2;
            }

            // Menampilkan hasil
            printf("Rata-rata Bilangan Genap Adalah: %d\n", rata_rata_genap);
            break;
        case 2:

            printf("Masukkan jumlah baris: ");
            scanf("%d", &n);

            int totalSum = 0;

            for (i = 1; i <= n; i++)
            {
                int rowSum = 0; // Menyimpan hasil perhitungan pada setiap baris

                for (j = 1; j <= i; j++)
                {
                    printf("%d", j);
                    rowSum += j;

                    if (j < i)
                    {
                        printf(" + ");
                    }
                }
                totalSum += rowSum;

                printf(" = %d\n", rowSum);
            }

            printf("\nJumlah keseluruhan: %d\n", totalSum);
            break;
        case 3:
            printf("");
            int kp_bakwan = 20;
            int kp_gehu = 15;
            int kp_pisgor = 25;
            int bakwan, gehu, pisgor;
            int kd_bakwan, kd_gehu, kd_pisgor;
            int total_kd;

            printf("Jumlah Bakwan Pak Engkus        : ");
            scanf("%d", &bakwan);
            printf("Jumlah Gehu Pak Engkus          : ");
            scanf("%d", &gehu);
            printf("Jumlah Pisang Goreng Pak Engkus : ");
            scanf("%d", &pisgor);

            // Menghitung jumlah kardus yang dibutuhkan
            kd_bakwan = ceil((double)bakwan / kp_bakwan);
            kd_gehu = ceil((double)gehu / kp_gehu);
            kd_pisgor = ceil((double)pisgor / kp_pisgor);

            total_kd = (kd_bakwan + kd_gehu + kd_pisgor);

            // Menampilkan hasil
            printf("\nBanyak Kardus Bakwan            : %d\n", kd_bakwan);
            printf("Banyak Kardus Gehu              : %d\n", kd_bakwan);
            printf("Banyak Kardus Pisgor            : %d\n", kd_bakwan);
            printf("Total Kardus Yang Di Butuhkan   : %d\n", total_kd);
            break;
        case 4:
            printf("Terima Kasih\n");
            return 0;
        default:
            printf("Pilihan Tidak Valid");
            fflush(stdin);
            fflush(stdout);
        }
        fflush(stdin);
        fflush(stdout);
        printf("\n");
        printf("Apakah Anda Ingin Kembali Ke Menu (Y/T)?  : ");
        char pilihanMenu;
        scanf("%c", &pilihanMenu);

        if (pilihanMenu == 'Y' || pilihanMenu == 'y')
        {
            ulangi = true;
        }
        else if (pilihanMenu == 'T' || pilihanMenu == 't')
        {
            ulangi = false;
        }
        else
        {
            printf("Pilihan tidak valid. Aplikasi akan keluar.\n");
            ulangi = false;
        }

    } while (ulangi);

    return 0;
}
