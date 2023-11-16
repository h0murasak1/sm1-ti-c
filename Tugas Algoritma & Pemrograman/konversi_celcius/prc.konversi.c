//#include "konversi.h"
#include "stdio.h"

void garis_pe()
{
    for (int i = 0; i < 25; i++)
    {
        printf("#");
    }
    printf("\n");
}
void clear() 
{
    printf("\033[2J\033[1;1H");
}
void c_ke_f() 
{
    double celsius, fahrenheit;

    printf("Masukkan suhu dalam Celsius (°C): ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2lf °C sama dengan %.2lf °F\n", celsius, fahrenheit);

}
void c_ke_r()
{
    double celsius, reamur;

    printf("Masukkan suhu dalam Celsius (°C): ");
    scanf("%lf", &celsius);

    reamur = celsius * 4/5;

    printf("%.2lf °C sama dengan %.2lf °Re\n", celsius, reamur);
}
void c_ke_k()
{
    double celsius, kelvin;

    printf("Masukkan suhu dalam Celsius (°C): ");
    scanf("%lf", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2lf °C sama dengan %.2lf K\n", celsius, kelvin);
}

void konversi(menu)
{
    switch (menu) {
        case 1:
        menu_1:
        clear();
        c_ke_f();
        break;
    
        case 2:
        menu_2:
        clear();
        c_ke_r();
        break;

        case 3:
        menu_3:
        clear();
        c_ke_k();
        break;

        default:
        clear();
        printf("Pilihan Tidak Valid");
        break;
    }

    

}