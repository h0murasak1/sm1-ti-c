/*
NAMA : FARHAN FATAHILLAH
NIM  : 20230801045
*/

#include <stdio.h>
#include <math.h>

int main() {
  printf("## Program Bahasa C Mencari Akar Persamaan Kuadrat ## \n");
  printf("\nNama  : Farhan Fatahillah");
  printf("\nNIM   : 20230801045");
  printf("\nEmail : farhanfatahillah10oib@students.esaungul.ac.id");
  printf("\n=================================");
  printf("===================================================== \n\n");
  printf("\n");

  int a, b, c, D;
  //float x1, x2;

  printf("Format persamaan: ax^2 + bx + c = 0 \n");
  printf("Input nilai a: ");
  scanf("%d", &a);
  printf("Input nilai b: ");
  scanf("%d", &b);
  printf("Input nilai c: ");
  scanf("%d", &c);

  printf("\n");

  D = (b * b) - (4 * a * c);
  printf("Diskriminan = %d", D);

  if (D == 0) {
    printf(" (akar real sama) \n");

    //x1 = x2 = (-b + sqrt(D)) / (2 * a);

    //printf("x1 = %.2f \n", x1);
    //printf("x2 = %.2f \n", x2);
  } else if (D > 0) {
    printf(" (akar real berbeda) \n");

    //x1 = (-b + sqrt(D)) / (2 * a);
    //x2 = (-b - sqrt(D)) / (2 * a);
    
    //printf("x1 = %.2f \n", x1);
    //printf("x2 = %.2f \n", x2);
  } else {
    printf(" (akar imajiner) \n");
  }

  return 0;
}