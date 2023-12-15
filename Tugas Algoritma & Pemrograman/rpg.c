#include <stdio.h>

void attack()
{

}

void recovery()
{
    
}

int main()
{
    int menu;
    printf("=====================================\n");
    printf("=           GAME RPG TERBAIK        =\n");
    printf("=====================================\n");
    printf("Pilihan Karakter\n");
    printf("1. Kesatria\n");
    printf("2. Pemanah\n");
    printf("3. Medis\n");
    printf("Masukkan Pilihan Karakter (1-3)");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("============\n");
        printf("= KESATRIA =\n");
        printf("============\n");
        break;
    case 2:
        printf("===========\n");
        printf("= PEMANAH =\n");
        printf("===========\n");
        break;
    case 3:
        printf("=========\n");
        printf("= MEDIS =\n");
        printf("=========\n");
        break;
    }
}