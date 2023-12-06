#include "prc.restaurant.c"
#include "lib.restaurant.h"

int main(void)
{
    printf("=================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();

    int choice;
    do
    {
        clear();
        printf("            RESTO HARGA ELIT RASA SULIT              \n");
        printf("=====================================================\n");
        printf("\n");
        printf("No\t Nama Barang\t Harga\n");
        printf("=====================================================\n");
        displayMenu(menu, count);
        printf("=====================================================\n");

        printf("1. Add New Menu\n");
        printf("2. Sort Menu By Name (Bubble Sort)\n");
        printf("3. Sort Menu By Price (Selection Sort)\n");
        printf("4. Search Menu\n");
        printf("5. Delete Menu\n");
        printf("6. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);
        restaurant(choice);
    } while (choice != 6);

    return 0;
}