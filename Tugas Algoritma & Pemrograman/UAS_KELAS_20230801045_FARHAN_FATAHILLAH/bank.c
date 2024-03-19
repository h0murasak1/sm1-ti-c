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
    if (pilihan == 6)
    {
        printf("Terima Kasih.....\n");
        return 0;
    }

    // Memanggil fungsi mainMenu() untuk memulai program
    mainMenu();

    return 0;
}