#include "lib.sodokuu.h"

void sodoku()
{
    // inisialisasi variable
    int baris, kolom, temp;
    int tempChkSemua, tempChkKolom; // bernilai 0 jika salah, dan 1 jika benar

    // inisialisasi pattern (isinya)
    Sodoku[0][0].isi = 1;
    Sodoku[0][1].isi = 2;
    Sodoku[0][2].isi = 3;
    Sodoku[0][3].isi = 4;
    Sodoku[1][0].isi = 3;
    Sodoku[1][1].isi = 1;
    Sodoku[1][2].isi = 4;
    Sodoku[1][3].isi = 2;
    Sodoku[2][0].isi = 2;
    Sodoku[2][1].isi = 4;
    Sodoku[2][2].isi = 1;
    Sodoku[2][3].isi = 3;
    Sodoku[3][0].isi = 4;
    Sodoku[3][1].isi = 3;
    Sodoku[3][2].isi = 2;
    Sodoku[3][3].isi = 1;

    // Inisialisasi UnCrossed Pattern
    Sodoku[0][3].status = 1;
    Sodoku[1][1].status = 1;
    Sodoku[2][2].status = 1;
    Sodoku[3][0].status = 1;

    do
    {
        // reset nilai pengecekan sementara
        tempChkSemua = 1;
        tempChkKolom = 1;
        isOK = 0;

        // bersihkan layar
        system("clear");

        // Cetak Yang Sudah Terjawab, tutup jika belum
        for (baris = 0; baris < 4; baris++)
        {
            for (kolom = 0; kolom < 4; kolom++)
            {
                if (Sodoku[baris][kolom].status != 1)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", Sodoku[baris][kolom].isi);
                }
            }
            printf("\n");
        }

        printf("\n");
        printf("Tebak Angka Sodoku, Akan terisi otomatis jika benar\n");
        printf("===================================\n");

        //meminta jawaban
        for(baris = 0; baris < 4; baris++)
        {
            for(kolom = 0; kolom < 4; kolom++)
            {
                temp = 0;
                if (Sodoku[baris][kolom].status != 1)
                {
                    printf("Masukkan Angka Baris %d Kolom %d : ", baris + 1, kolom + 1);
                    scanf("%d", &temp);

                    if (temp == Sodoku[baris][kolom].isi)
                    {
                        Sodoku[baris][kolom].status = 1;
                    }
                }
            }
        }

        //cek jawaban
        for(baris = 0; baris < 4; baris++)
        {
            for(kolom = 0; kolom < 4; kolom++)
            {
                if((tempChkSemua == 1) && (Sodoku[baris][kolom].status == 1))
                {
                    tempChkSemua = 1;
                }
                else
                {
                    tempChkSemua = 0;
                }
            }
        }
        isOK = tempChkSemua;
    } while (isOK != 1);

    //Akhiri Game
    system("clear");
    printf("Selamat kamu berhasil menyelesaikan permainan sodoku\n");
    printf("\n");
    system("pause");
}