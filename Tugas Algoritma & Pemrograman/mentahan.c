#include <stdio.h>
#include <math.h>

int main() {
    int kp_bakwan   = 20;
    int kp_gehu     = 15;
    int kp_pisgor    = 25;
    int bakwan, gehu, pisgor;
    int kd_bakwan, kd_gehu, kd_pisgor;
    int total_kd;

    printf("Jumlah Bakwan Pak Engkus        : ");
    scanf("%d", &bakwan);
    printf("Jumlah Gehu Pak Engkus          : ");
    scanf("%d", &gehu);
    printf("Jumlah Pisang Goreng Pak Engkus : ");
    scanf("%d", &pisgor);

    // Menghitung jumlah kardus yang dibutuhkan
    kd_bakwan = ceil((double)bakwan / kp_bakwan);
    kd_gehu = ceil((double)gehu / kp_gehu);
    kd_pisgor = ceil((double)pisgor / kp_pisgor);

    total_kd = (kd_bakwan + kd_gehu + kd_pisgor);

    // Menampilkan hasil
    printf("\nBanyak Kardus Bakwan            : %d\n", kd_bakwan);
    printf("Banyak Kardus Gehu              : %d\n", kd_bakwan);
    printf("Banyak Kardus Pisgor            : %d\n", kd_bakwan);
    printf("Total Kardus Yang Di Butuhkan   : %d\n", total_kd);

    return 0;
}
