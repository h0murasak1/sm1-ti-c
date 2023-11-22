#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int menu;
void delay_1()
{
    usleep(1000000);
}
void clear()
{
    printf("\033[2J\033[1;1H");
}
void NilaiRataRata()
{
    printf("========== NILAI RATA-RATA ==========\n");
    int i, n, a[10];
    int angka = 0; // Inisialisasi angka dengan 0
    float rtrt;

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
        angka += a[i];
    }

    printf("\n\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Angka ke-[%d] Adalah : %d\n", i + 1, a[i]);
    }

    rtrt = (float)angka / n; // Ubah angka menjadi float untuk menghindari penjumlahan integer

    printf("Rata Rata Nilai Adalah : %.2f", rtrt);
}
void NilaiGenap()
{
    printf("========== NILAI GENAP ==========\n");
    int i, n, a[10];
    int angka = 0; // Inisialisasi angka dengan 0
    float rtrt;

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\n\n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Gnp Array Ke-[%d] Adalah : %d\n", i + 1, a[i]);
        }
        else
        {
            printf("Gnj Array Ke-[%d] Adalah : %d\n", i + 1, a[i]);
        }
    }
}
void Nilai5()
{
    printf("========== NILAI 5 ==========\n");
    int i, n, a[10];
    int A5 = 0; // Inisialisasi jumlah angka 5 dengan 0

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);

        // Memeriksa apakah angka 5
        if (a[i] == 5)
        {
            A5++;
        }
    }

    printf("\n\n\n");

    // Menampilkan jumlah kemunculan angka 5
    printf("Jumlah Inputan 5 Ada : %d\n", A5);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            // Mencari angka 5 dalam array dan menampilkan indeksnya
            printf("Angka 5 ditemukan pada Array Ke-[%d]\n", i + 1);
        }
    }
}
void MaxMin()
{
    printf("========== NILAI MAX & MIN ==========\n");
    int i, n, a[10];

    printf("Masukkan Banyak Angka : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan Angka ke-[%d] : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\n\n");
    int max = a[0];
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i]; // Update nilai max jika ditemukan nilai yang lebih besar
        }

        if (a[i] < min)
        {
            min = a[i]; // Update nilai min jika ditemukan nilai yang lebih kecil
        }
    }

    printf("Nilai Maximumnya Adalah     : %d\n", max);
    printf("Nilai Minimumnya Adalah     : %d\n", min);
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
        clear();
        printf("========== SELAMAT DATANG ==========");
        printf("\n");
        printf("1. Nilai Rata-Rata Dengan Array\n");
        printf("2. Nilai genap pada array\n");
        printf("3. Banyak angka 5 pada array\n");
        printf("4. Nilai Max & nilai min dengan array\n");
        printf("5. Keluar Program\n");
        printf("Pilih Menu (1-5) : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            clear();
            NilaiRataRata();
            fflush(stdin);
            break;

        case 2:
            clear();
            NilaiGenap();
            fflush(stdin);
            break;

        case 3:
            clear();
            Nilai5();
            fflush(stdin);
            break;

        case 4:
            clear();
            MaxMin();
            fflush(stdin);
            break;

        case 5:
            printf("Terima Kasih......\n");
            return 0;
            break;

        default:
            clear();
            fflush(stdin);
            printf("Pilihan Tidak Valid.....\n");
            delay_1();
            break;
        }
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