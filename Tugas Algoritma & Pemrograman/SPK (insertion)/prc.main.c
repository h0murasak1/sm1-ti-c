#include "lib.main.h"

int main(){
	int kelas,jumlah;
	system("cls");
	printf("\n  SPK Pembagian Kelas~\n------------------------\n\n");
	printf("Masukan Banyak Kelas : ");
	scanf("%d",&kelas);
	printf("Masukan Banyak Data  : ");
	scanf("%d",&jumlah);
	printf("data \n");
	input(mhs,jumlah);
	urut(mhs,jumlah);
	printf("\n");
	print(mhs,jumlah,kelas);
	system("pause");
}
