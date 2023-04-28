#include <stdio.h>
//-----PERDAHULUAN------//
void soal_pendahuluan()
{
}

//-----PERCOBAAN-----//
void soal_percobaan_1()
{
    int i, n, x, a = 0;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            a += x;
        }
    }

    printf("Jumlah data genap adalah: %d\n", a);
}

void soal_percobaan_2()
{
    int i, n, total = 0, x;
    float avg;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &x);
        total += x;
    }

    avg = total / n;

    printf("Jumlah data adalah: %d\n", total);
    printf("Rata-rata data adalah: %.1f\n", avg);
}

int main()
{
    // soal_pendahuluan();
    // soal_percobaan_1();
     soal_percobaan_2();
}