//#include "stdio.h"
#include "prc.HitungLuas.c"
//#include "lib.HitungLuas.h"

int main(void)
{
    int panjang, lebar, luas;
    printf("Masukkan Panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan Lebar   : ");
    scanf("%d", &lebar);

    luas = LuasPersegi (panjang, lebar);

    printf("Luasnya adalah %d\n", luas);
    getchar();
}