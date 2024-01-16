#include "bank.h"

void sumpah()
{
    printf("Dengan Nama ALLAH, saya Farhan Fatahillah bersumpah bahwa saya tidak melakukan kecurangan (mencontek ataupun memberikan contekan) selama UAS Algoritma dan pemrograman ini berlangsung,\njika pengawas menemukan saya melakukan kecurangan maka saya siap mendapatkan nilai 0 pada UAS, \ndan apabila kecurangan saya tidak diketahui oleh pengawas maka saya siap mendapatkan azab dari ALLAH baik dunia maupun di akhirat kelak");
    printf("\n");
}

void transfer()
{
    fflush(stdin);
    // Variabel untuk menyimpan nomor rekening tujuan dan nominal transfer
    int noRekeningTujuan;
    int nominalTransfer;

    // Meminta input dari pengguna
    printf("Masukkan nomor rekening tujuan: ");
    scanf("%d", &noRekeningTujuan);
    while(getchar() != '\n');

    printf("Masukkan nominal transfer: ");
    scanf("%d", &nominalTransfer);
    while(getchar() != '\n');

    // Memeriksa apakah saldo mencukupi
    if (rekeningPengguna.saldo - nominalTransfer >= 0)
    {
        // Melakukan transfer
        rekeningPengguna.saldo -= nominalTransfer;

        // Menampilkan informasi transfer
        printf("\nTransfer berhasil!\n");
        printf("Nomor rekening tujuan: %d\n", noRekeningTujuan);
        printf("Nominal transfer: Rp.%d\n", nominalTransfer);
        printf("Saldo tersisa: %d\n", rekeningPengguna.saldo);
    }
    else
    {
        // Menampilkan pesan jika saldo tidak mencukupi
        printf("\nTransfer gagal. Saldo tidak mencukupi.\n");
        printf("Saldo saat ini: Rp.%d\n", rekeningPengguna.saldo);
    }
}

void nabung()
{

    int nabung = 0;
    // Meminta input dari pengguna
    printf("Masukkan nominal uang yang ingin ditabung: ");
    scanf("%d", &nabung);
    fflush(stdin);

    rekeningPengguna.saldo += nabung;

    // Menampilkan informasi hasil tabungan
    printf("\nAnda telah berhasil menabung sebesar: %d\n", nabung);
    printf("Total Saldo : %d", rekeningPengguna.saldo);
}

void tarikTunai()
{
    fflush(stdin);
    // Nominal uang yang ingin ditarik
    int nominalPenarikan;

    // Meminta input dari pengguna
    printf("Masukkan nominal uang yang ingin ditarik (minimal 50000): ");
    scanf("%d", &nominalPenarikan);

    // Memeriksa apakah nominal uang yang diminta sesuai syarat
    if (nominalPenarikan >= 50000 && rekeningPengguna.saldo - nominalPenarikan >= 0)
    {
        // Melakukan penarikan
        rekeningPengguna.saldo -= nominalPenarikan;

        // Menampilkan informasi penarikan
        printf("\nPenarikan berhasil!\n");
        printf("Nominal yang ditarik: Rp.%d\n", nominalPenarikan);
        printf("Saldo tersisa: Rp.%d\n", rekeningPengguna.saldo);
    }
    else
    {
        // Menampilkan pesan jika nominal uang tidak sesuai syarat
        printf("\nPenarikan gagal. Nominal minimal 50000 atau saldo tidak mencukupi.\n");
        printf("Saldo saat ini: Rp.%d\n", rekeningPengguna.saldo);
    }
}

void sisaSaldo()
{
    printf("Sisa Saldo Anda Sekarang : Rp.%d", rekeningPengguna.saldo);
}