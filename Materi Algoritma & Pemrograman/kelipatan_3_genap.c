/*
NAMA : FARHAN FATAHILLAH
NIM  : 20230801045
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

	char ulangi = 'y';
    do 
  {
	int cekBilangan, cekKelipatan3, cekGenap;
	printf("=====================================\n");
	printf("Aplikasi Pengecek Kelipatan Tiga & Genap\n");
	printf("=====================================\n");

	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);

	cekGenap = cekBilangan % 2;
	cekKelipatan3 = cekBilangan % 3;

	if (cekKelipatan3 == 0) {
		if (cekGenap == 0) {
			printf("Genap & Kelipatan 3\n");
		}
		else if (cekGenap == 1) {
			printf("Tidak Genap & Tidak Kelipatan 3\n");
		}
	}

	else {
		if (cekGenap == 0) {
			printf("Genap & Tidak Kelipatan 3\n");
		}
		else if (cekGenap ==1) {
			printf("Tidak Genap & Tidak Kelipatan 3\n");
		}
	}

	printf("Kembali Ke Menu Awal ");
    printf("(y/t) : ");
    scanf(" %s", &ulangi);

  }while (ulangi == 'y');

  printf("Terima Kasih...\n");
}