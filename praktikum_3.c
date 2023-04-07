// soal pendahuluan
#include <stdio.h>

int main()
{
    int a, b, c;
    char x;
    do
    {
        printf("masukan suatu bilangan:");
        scanf("%d", &a);
        printf("masukan bilangan pembagi:");
        scanf("%d", &b);
        c = a % b;
        if (c == 0)
        {
            printf("tidak ada sisa\n");
        }
        else
        {
            printf("sisa bilangan adalah :%d\n", c);
        }
        printf("apakah anda ingin meneruskan? (y/t)");
        scanf("%s", &x);
    } while (x == 'y');

    return 0;
}

// soal percobaan 1
#include <stdio.h>

int main()
{
    int i, x, hasil;

    printf("masukan nilai :");
    scanf("%d", &x);
    hasil = 0;
    for (i = 1; i <= x; i++)
        hasil = hasil + i;
    printf("jaumlah dari 1 sampai %d adalah :%d", x, hasil);
}

// soal percobaan 2
#include <stdio.h>

int main()
{
    int i, hasil, n;
    char x = 'y';

    hasil = 0;
    i = 0;
    while (x == 'y')

    {
        i++;
        printf("masukan nilai ke %d  :", i);
        scanf("%d", &n);

        hasil = hasil + n;

        printf("apakah ingin menambakan nilai? (y/t)");
        scanf("%s", &x);
    }

    printf("Hasil jumlah yang dimasukan :%d\n", hasil);
}

// soal percobaan 3
#include <stdio.h>

int main()
{
    int x;

    while (x != 50)
    {
        printf("masukan angka tebakan :");
        scanf("%d", &x);

        if (x == 50)
        {
            printf("tebakan anda benar");
        }
        else if (x < 50)
        {
            printf("tebakan terlalu kecil\n");
        }
        else if (x > 50)
        {
            printf("tebakan terlalu besar\n");
        }
    }
}

// soal percobaan 4
#include <stdio.h>

int main()
{
    char x;

    while (1)
    {
        printf("apakah anda sudah sholat (b/s) :");
        scanf("%s", &x);
        if (x == 's')
        {
            printf("bagus !\n");
            break;
        }
        else if (x == 'b')
        {
            printf("sholat adalah ibadah\n");
            break;
        }
    }
}