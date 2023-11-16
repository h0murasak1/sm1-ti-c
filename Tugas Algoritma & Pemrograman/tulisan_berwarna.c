#include <stdio.h>

int main() {
    // Menggunakan ANSI Escape Codes untuk mengubah warna teks
    printf("\x1b[31mMerah\x1b[0m\n");      // Merah
    printf("\x1b[32mHijau\x1b[0m\n");     // Hijau
    printf("\x1b[33mKuning\x1b[0m\n");    // Kuning
    printf("\x1b[34mBiru\x1b[0m\n");      // Biru
    printf("\x1b[35mMagenta\x1b[0m\n");  // Magenta
    printf("\x1b[36mCyan\x1b[0m\n");     // Cyan


    printf("\x1b[31mF\x1b[0m\x1b[32mA\x1b[0m\x1b[33mR\x1b[0m\x1b[34mH\x1b[0m\x1b[35mA\x1b[0m\x1b[36mN\x1b[0m\n");

    return 0;
}