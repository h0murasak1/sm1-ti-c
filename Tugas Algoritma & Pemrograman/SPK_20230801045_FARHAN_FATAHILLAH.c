#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bagiKelas(int nKelas, int nData, int data[])
{
    int totalData = nData * 2;
    int hasil[totalData / 2];

    // Menghitung hasil penjumlahan data dua per dua
    for (int i = 0, j = 0; i < totalData; i += 2, j++)
    {
        hasil[j] = data[i] + data[i + 1];
    }

    // Mengurutkan hasil secara menurun beserta data terkaitnya
    for (int i = 0; i < totalData / 2 - 1; i++)
    {
        for (int j = i + 1; j < totalData / 2; j++)
        {
            if (hasil[i] < hasil[j])
            {
                swap(&hasil[i], &hasil[j]);
                swap(&data[i * 2], &data[j * 2]);
                swap(&data[i * 2 + 1], &data[j * 2 + 1]);
            }
        }
    }

    // Memasukkan data ke dalam kelas sesuai aturan
    for (int k = 0; k < nKelas; k++)
    {
        printf("\nKelas X-%d :\n", k + 1);
        for (int i = k; i < totalData / 2; i += nKelas)
        {
            printf("%d | %d (data ke %d dan %d)\n", data[i * 2], data[i * 2 + 1], i * 2 + 1, i * 2 + 2);
        }
        printf("------------------------\n");
    }
}

int main()
{
    int nKelas, nData;

    // Meminta input jumlah kelas
    printf("Masukkan Banyak Kelas: ");
    scanf("%d", &nKelas);

    // Meminta input jumlah data
    printf("Masukkan Banyak Data: ");
    scanf("%d", &nData);

    // Meminta input data
    int data[nData * 2];
    printf("\nMasukkan %d pasang data:\n", 2 * nData);
    for (int i = 0; i < 2 * nData; i++)
    {
        printf("data ke %d : ", i + 1);
        scanf("%d", &data[i]);
    }

    // Memanggil fungsi bagiKelas
    bagiKelas(nKelas, nData, data);

    return 0;
}