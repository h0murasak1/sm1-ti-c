/*NAMA : FARHAN FATAHILLAHNIM  : 20230801045*/#include <stdio.h>#include <stdlib.h>int main () {	char ulangi = '1';    do   {	int cekBilangan, cekKelipatan3;	printf("=====================================\n");	printf("Aplikasi Pengecek Kelipatan 3\n");	printf("=====================================\n");	printf("Masukkan Bilangan : ");	scanf("%d", &cekBilangan);	cekKelipatan3 = cekBilangan % 3;	if (cekKelipatan3 == 0)	{		printf("Bilangan merupakan Kelipatan 3\n");	}	else	{		printf("Bilagan bukan merupakan Kelipatan 3\n");	}	printf("1. Kembali Ke Menu Awal\n");    printf("2. Keluar Dari Aplikasi\n");    printf("Masukkan Pilihan Anda : ");    scanf(" %c", &ulangi);  }while(ulangi == '1');  printf("Terima Kasih...");}