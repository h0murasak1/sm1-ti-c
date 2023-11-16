#include <stdio.h>
#include <unistd.h>

void garis_pa() {
    int i;
    for (i=0; i < 50; i++) {
    printf("=");
    }
    printf("\n");
}
void garis_pe() {
    int i;
    for (i=0; i < 25; i++) {
    printf("=");
    }
    printf("\n");
}
void clear() {
    printf("\033[2J\033[1;1H");
}
 
int main()
{
  garis_pa();
  printf("## Program Membuat Angka Piramida Di C ##\n");
  garis_pa();
  printf("Nama  : Farhan fatahillah\n");
  printf("NIM   : 20230801045\n");
  printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
  garis_pa();

  int tinggi_segitiga,i,j;
 
  printf("Masukkan bilangan: ");
  scanf("%d",&tinggi_segitiga);
 
  printf("\n");
 
  for(i=1; i>=tinggi_segitiga; i++) {
    for(j=1; j<=i; j++) {
      printf("%d ",j);
      usleep(50000);
    }
    printf("\n");
  }
 
  return 0;
}