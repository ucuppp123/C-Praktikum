//daffa safriel & 2040221104

//tugas pendahuluan 1
#include <stdio.h>

int main()
{
    int i, j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            printf("A");
        }
        printf("\n");
    }
    
}

//tugas pendahuluan 2
#include <stdio.h>

int main() {
    int i, j, k;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("*");
        }
        for (j = 0; j < 4; j++) {
            printf("-");
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++) {
            printf("-");
        }
        printf("\n");
    }
    
    return 0;
}

//tugas percobaan 1
#include<stdio.h>

int main()
{
    int i, n, j;

    printf("masukan nilai: ");
    scanf("%d", &n);
    
    for ( i = 0; i <= n+1; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--) 
    {
        for(j=1; j<=i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

//tugas percobaan 2
#include <stdio.h>

int main()
{
    int i, j, k, l;

    for ( i = 0; i < 1; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        for ( k = 1; k <= 10; k++)
        {
            printf("%d ", k+=1);
        }
        printf("\n");
        for ( l = 1; l <= 15; l++)
        {
            printf("%d ", l+=2);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}

//tugas percobaan 3
#include <stdio.h>

int main()
{
    int i, j, k, n;
    float r, l=0;
    
    printf("masukan jumlah data? ");
    scanf("%d", &j);

    for ( i = 1; i <= j; i++)
    {
        printf("data ke- %d? ", i);
        scanf("%d", &k);

        if (k<0)
        {
            i--;
            printf("nilai yang dimasukan negatif!!!\n");
            continue;
        }
        l +=k;
    }
    r=l/j;
    printf("banyaknya mahasiswa     = %d\n", j);
    printf("total nilai mahasiswa   = %.0f\n", l);
    printf("nilai rata rata         = %.2f\n", r);
    return 0;
}

//tugas percobaan 4
#include <stdio.h>

int main() {
    
    int B, a, c, d;

    printf("masukan jumlah data? ");
    scanf("%d", &c);

    for ( a = 1; a <= c; a++)
    {
        printf("data ke- %d? ", a);
        scanf("%d", &B);
        if (B == 0)
        {
            goto Tak_berhingga;
        }
        d +=B;
    }
    Tak_berhingga:
        printf("Nilai B adalah 0, program berhenti\n");
    // if (B == 0) {
    //     goto Tak_berhingga;
    // } else {
    //     printf("Nilai B adalah %d\n", B);
    // }

    // Tak_berhingga:
    //     printf("Nilai B adalah 0, program berhenti\n");
    
    // return 0;
}

//tugas lapres 2
#include <stdio.h>

int main()
{
    int x = 0, n, j, i, counter = 0, num = 2;

    printf("Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);
    // while (counter < n)
    for (j=0 ; counter<n ; j++)
    {
        int num_prima = 1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                num_prima = 0;
                break;
            }
        }
        if (num_prima == 1)
        {
            x++;
            printf(" bilangan prima ke %d = %d\n ", x, num);
            counter++;
        }
        num++;
    }
}