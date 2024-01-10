#include "lib.rekursif.h"

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis kasus: faktorial dari 0 dan 1 adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Langkah rekursif: n! = n * (n-1)!
        return n * faktorial(n - 1);
    }
}