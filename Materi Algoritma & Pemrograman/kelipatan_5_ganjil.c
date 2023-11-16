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
	int cekBilangan, cekKelipatan5, cekGanjil;
	printf("=====================================\n");
	printf("Aplikasi Pengecek Kelipatan Tiga & Genap\n");
	printf("=====================================\n");

	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);

	cekGanjil = cekBilangan % 2;
	cekKelipatan5 = cekBilangan % 5;

	//Disini itu kelipatan 5
	if (cekKelipatan5 == 0) {
		if (cekGanjil == 0) {
			printf("Tidak Ganjil & Kelipatan 5\n");
		}
		else if (cekGanjil == 1) {
			printf("Ganjil & Tidak Kelipatan 5\n");
		}
	}
	//Disini Bukan Kelipatan 5
	else {
		if (cekGanjil == 0) {
			printf("Tidak Ganjil & Tidak Kelipatan 5\n");
		}
		else if (cekGanjil ==1) {
			printf("Ganjil & Tidak Kelipatan 5\n");
		}
	}

	printf("Kembali Ke Menu Awal ");
    printf("(y/t) : ");
    scanf(" %s", &ulangi);

  }while (ulangi == 'y');

  printf("Terima Kasih...\n");
}