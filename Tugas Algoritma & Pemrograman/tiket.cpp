#include <iostream>
#include <cstdlib> // Untuk clear screen

using namespace std;

int menu, tiket;
int ekonomi = 100000;
int bisnis = 200000;
int eksekutif = 300000;
int jumlah = 0;
int total = 0;
int diskon = 0;

int main() {
    system("clear");
    cout << "==================================\n";
    cout << "APLIKASI TIKET KERETA SUDI MAKMUR\n";
    cout << "==================================\n";
    cout << "PILIHAN MENU\n";
    cout << "=============\n";
    cout << "1. Ekonomi      (Rp.100.000/Tiket)\n";
    cout << "2. Bisnis       (Rp.200.000/Tiket)\n";
    cout << "3. Eksekutif    (Rp.300.000/Tiket)\n";
    cout << "4. Keluar \n";
    cout << "Masukkan Pilihan Tiket : ";
    cin >> menu;
    system("clear");

    switch (menu) {
        case 1:
            cout << "kelas ekonomi\n";
            cout << "==================\n";
            cout << "Berapa Jumlah Tiket Yang Ingin Di Pesan : ";
            cin >> tiket;
            jumlah = ekonomi * tiket;
            break;
        case 2:
            cout << "kelas bisnis\n";
            cout << "==================\n";
            cout << "Berapa Jumlah Tiket Yang Ingin Di Pesan : ";
            cin >> tiket;
            jumlah = bisnis * tiket;
            break;
        case 3:
            cout << "kelas eksekutif\n";
            cout << "==================\n";
            cout << "Berapa Jumlah Tiket Yang Ingin Di Pesan : ";
            cin >> tiket;
            jumlah = eksekutif * tiket;
            break;
        case 4:
            cout << "Terima Kasih.....";
            return 0;
    }

    if (jumlah >= 500000) {
        diskon = jumlah * 0.1;
        total = jumlah - diskon;
    } else if (jumlah >= 300000) {
        diskon = jumlah * 0.05;
        total = jumlah - diskon;
    } else if (jumlah >= 200000) {
        diskon = jumlah * 0.02;
        total = jumlah - diskon;
    } else {
        total = jumlah;
    }

    system("clear");
    cout << "Jumlah Tiket Yang Di Pesan Adalah : " << tiket << endl;
    cout << "Diskon Yang Anda Dapatkan Sebesar : " << diskon << endl;
    cout << "Jumlah Yang Harus Di Bayar Adalah : Rp." << total << endl;

    return 0;
}
