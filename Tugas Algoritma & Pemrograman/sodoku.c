#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void loadingAnimation()
{
    const char animation[] = "|/-\\";
    int i;

    printf("Loading ");
    for (i = 0; i < 20; i++)
    {
        printf("%c\b", animation[i % 9]);
        fflush(stdout);
        usleep(100000); // Pause for 100,000 microseconds (0.1 seconds)
    }
    printf("\b\b\b\b\b\b\b\b");
}

int sodoku[9][9];

void solvesodoku(int, int);

int checkrow(int row, int num)
{
    int column;
    for (column = 0; column < 9; column++)
    {
        if (sodoku[row][column] == num)
        {
            return 0;
        }
    }

    return 1;
}

int checkcolumn(int column, int num)
{
    int row;
    for (row = 0; row < 9; row++)
    {
        if (sodoku[row][column] == num)
        {
            return 0;
        }
    }
    return 1;
}

int checkgrid(int row, int column, int num)
{
    row = (row / 3) * 3;
    column = (column / 3) * 3;

    int r, c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (sodoku[row + r][column + c] == num)
            {
                return 0;
            }
        }
    }

    return 1;
}

void navigate(int row, int column)
{
    if (column < 8)
        solvesodoku(row, column + 1);
    else
        solvesodoku(row + 1, 0);
}

void display()
{
    int row, column;
    int pbt1 = 1;
    loadingAnimation();
    printf("=======================================\n");
    printf("SODOKU TERPECAHKAN\n");
    for (row = 0; row < 9; row++)
    {
        for (column = 0; column < 9; column++)
        {
            printf("%d ", sodoku[row][column]);
        }
        /*for (int pbt = row; pbt >= 3 * pbt1 - 1; pbt1++)
        {
            printf("\n");
            printf("-----|-----|-----");
        }*/

        printf("\n");
    }
}

void solvesodoku(int row, int column)
{
    if (row > 8)
        display();
    if (sodoku[row][column] != 0)
    {
        navigate(row, column);
    }
    else
    {
        int ctr;
        for (ctr = 1; ctr <= 9; ctr++)
        {
            if ((checkrow(row, ctr) == 1) && (checkcolumn(column, ctr) == 1) && (checkgrid(row, column, ctr) == 1))
            {
                sodoku[row][column] = ctr;
                navigate(row, column);
            }
        }
        sodoku[row][column] = 0;
    }
}

int main()
{
    int row, column;
    int pbt1 = 1;
    system("clear");
    printf("Masukkan Angka yang Diinginkan dan masukkan 0 untuk Angka yang tidak diketahui\n");
    for (row = 0; row < 9; row++)
    {
        for (column = 0; column < 9; column++)
        {
            scanf("%d", &sodoku[row][column]);
            /*for (int pbt = row; pbt >= 3 * pbt1 - 1; pbt1++)
            {
                printf("-----|-----|-----");
                printf("\n");
            }*/
        }
    }

    solvesodoku(0, 0);
    return 0;
}
