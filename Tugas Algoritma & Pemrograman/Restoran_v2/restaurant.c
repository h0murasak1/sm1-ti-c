#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void clear()
{
    printf("\033[2J\033[1;1H");
}

// definisi makanan
struct Food
{
    char name[50];
    int price;
};

struct Food menu[50]; // Maksimum 50 makanan
int count = 0;        // Jumlah makanan saat ini
int deleteIndex;

// Fungsi untuk menambahkan data makanan
void addFood(struct Food menu[], int *count)
{
    clear();
    printf("=====================\n");
    printf("= Tambahkan Makanan =\n");
    printf("=====================\n");
    fflush(stdin);
    printf("Tambahkan Nama Makanan : ");

    // Gunakan fgets untuk membaca seluruh baris, termasuk spasi
    fgets(menu[*count].name, sizeof(menu[*count].name), stdin);

    // Hapus karakter newline hanya jika karakter tersebut ada
    size_t len = strlen(menu[*count].name);
    if (len > 0 && menu[*count].name[len - 1] == '\n')
    {
        menu[*count].name[len - 1] = '\0';
    }

    printf("\n");
    printf("Tambahkan Harga Makanan : ");
    scanf("%d", &menu[*count].price);

    (*count)++;
}

// Fungsi untuk menampilkan data makanan
void displayMenu(struct Food menu[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d.\t %s\t  Rp.%d\n", i + 1, menu[i].name, menu[i].price);
    }
}

// Fungsi untuk melakukan Bubble Sort berdasarkan nama makanan
void sortMenuByName(struct Food menu[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (strcmp(menu[j].name, menu[j + 1].name) > 0)
            {
                // Swap
                struct Food temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
}

// Fungsi untuk melakukan Selection Sort berdasarkan harga makanan
void sortMenuByPrice(struct Food menu[], int count)
{
    int i, j, minIndex;
    struct Food temp;

    for (i = 0; i < count - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < count; j++)
        {
            if (menu[j].price < menu[minIndex].price)
            {
                minIndex = j;
            }
        }

        // Swap
        temp = menu[minIndex];
        menu[minIndex] = menu[i];
        menu[i] = temp;
    }
}

// Fungsi untuk melakukan Binary Search berdasarkan nama makanan
int binarySearchMenuByName(struct Food menu[], int left, int right, const char *searchName)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int result = strcmp(menu[mid].name, searchName);

        // Check if the searchName is present at the middle
        if (result == 0)
            return mid;

        // If searchName is greater, ignore the left half
        if (result < 0)
            left = mid + 1;

        // If searchName is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If we reach here, then the searchName is not present
    return -1;
}

void binarySearch()
{
    clear();
    fflush(stdin);
    char searchName[50];
    printf("Masukkan Nama Makanan yang dicari : ");
    fgets(searchName, sizeof(searchName), stdin);
    size_t len = strlen(searchName);
    if (len > 0 && searchName[len - 1] == '\n')
    {
        searchName[len - 1] = '\0';
    }

    // Before searching, make sure the menu is sorted by name
    sortMenuByName(menu, count);

    // Perform Binary Search
    int result = binarySearchMenuByName(menu, 0, count - 1, searchName);
    printf("=====================================================\n");

    if (result != -1)
    {
        printf("Makanan ditemukan di posisi %d.\n", result + 1);
        printf("%s\t  Rp.%d\n", menu[result].name, menu[result].price);
    }
    else
    {
        printf("Makanan tidak ditemukan.\n");
    }

    printf("=====================================================\n");
    getchar();
}

// Fungsi untuk menghapus data makanan
void deleteFood(struct Food menu[], int *count, int index)
{
    if (index < 0 || index >= *count)
    {
        printf("Indeks tidak valid.\n");
        return;
    }

    for (int i = index; i < *count - 1; i++)
    {
        menu[i] = menu[i + 1];
    }

    (*count)--;
    printf("Makanan dihapus dengan sukses.\n");
}

int main()
{
    printf("=================================\n");
    printf("Nama  : Farhan fatahillah\n");
    printf("NIM   : 20230801045\n");
    printf("Email : farhanfatahillah10oib@student.esaungul.ac.id\n");
    printf("=================================\n");
    printf("\n");
    printf("Tekan ENTER Untuk Melanjutkan.............\n");
    getchar();

    int choice;
    do
    {
        clear();
        printf("Restaurant Aduhai\n");
        printf("=====================================================\n");
        printf("\n");
        printf("No\t Nama Barang\t Harga\n");
        printf("=====================================================\n");
        displayMenu(menu, count);
        printf("=====================================================\n");

        printf("1. Add New Menu\n");
        printf("2. Sort Menu By Name (Bubble Sort)\n");
        printf("3. Sort Menu By Price (Selection Sort)\n");
        printf("4. Search Menu\n");
        printf("5. Delete Menu\n");
        printf("6. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addFood(menu, &count);
            break;
        case 2:
            // Bubble Sort by Name
            sortMenuByName(menu, count);
            break;
        case 3:
            sortMenuByPrice(menu, count);
            break;
        case 4:
            binarySearch();
            break;
        case 5:
        {
            clear();
            int deleteIndex;
            printf("Masukkan indeks makanan yang ingin dihapus : ");
            scanf("%d", &deleteIndex);
            deleteFood(menu, &count, deleteIndex - 1);
        }
        break;
        case 6:
            printf("Terima Kasih.....\n");
            return 0;
            break;
        default:
            printf("Inputan Tidak Valid");
            fflush(stdin);
        }
    } while (choice != 6);

    return 0;
}
