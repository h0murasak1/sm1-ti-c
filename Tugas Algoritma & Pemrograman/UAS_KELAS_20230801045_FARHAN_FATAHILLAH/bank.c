
#include "prc.bank.c"

int main()
{
    printf("=================================================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();

    do
    {
    main:
        system("clear");
        printf("=============================================\n");
        printf("===========PROGRAM SIMULASI BANK=============\n");
        printf("=============================================\n\n");
        printf("PILIH MENU\n");
        printf("1. Sumpah\n");
        printf("2. Transfer\n");
        printf("3. Nabung\n");
        printf("4. Tarik Tunai\n");
        printf("5. Lihat Saldo\n");
        printf("6. EXIT\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            system("clear");
            printf("Sumpah Saya\n");
            printf("============\n");
            sumpah();
            break;

        case 2:
            system("clear");
            printf("TRANSFER\n");
            printf("============\n");
            transfer();
            break;

        case 3:
            system("clear");
            printf("NABUNG\n");
            printf("============\n");
            nabung();
            break;

        case 4:
            system("clear");
            printf("TARIK TUNAI\n");
            printf("============\n");
            tarikTunai();
            break;

        case 5:
            system("clear");
            printf("LIHAT SALDO\n");
            printf("============\n");
            sisaSaldo();
            break;

        case 6:
            system("clear");
            printf("Terima Kasih Telah Menggunakan Aplikasi Kami......\n");
            return 0;

        default:
            system("clear");
            printf("Inputan tidak valid, masukkan pilihan antara (1 - 6)\n");
        }
        // Memberikan opsi untuk kembali ke menu utama
        printf("\nApakah Anda ingin kembali ke menu utama? (y/n): ");
        char jawaban;
        scanf(" %c", &jawaban);

        if (jawaban != 'y' && jawaban != 'Y')
        {
            break; // Keluar dari loop jika jawaban bukan 'y' atau 'Y'
        }

    } while (1);
}