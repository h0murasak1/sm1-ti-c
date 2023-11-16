/*
NAMA : FARHAN FATAHILLAH
NIM  : 20230801045
*/

#include <stdio.h>
#include <unistd.h>

int main () {
	int i ;
	for (i=43;i<=99;i+=2) {
		printf("%d\n", i);
		usleep(200000);//menunda eksekusi selama 0,5 detik
	}

	return 0;
}