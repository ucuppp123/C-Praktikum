// TODO Laporan Resmi
// TODO Kumpulkan listing program, ilustrasi alokasi memorinya beserta hasil eksekusinya
// *** PROGRAM IKI RUN NDE LAPTOPMU YAN, SESUAI SOAL ... by Jona ***/
// *** DI RUN PROGRAME LAK MISAL ENEK SOAL "Serta gambarkan ilustrasi alokasi memori"

#include <stdio.h>

//******** PENDAHULUAN NOMER 1 ********//
void p10_tugas_pendahuluan_1()
{
    int a = 4;
    int b = 7;
    int *x, *y;
    x = &a;
    y = &b;
    printf("Alamat memori x : %p\n", (void *)&x);
    printf("Alamat memori y : %p\n", (void *)&y);
    printf("SEMULA : a = %d b = %d\n", a, b);
    *x = *x * 4;
    *y = *y + *x;
    printf("Alamat memori *x : %p\n", *x);
    printf("Alamat memori *y : %p\n", *y);
    printf("Alamat memori a : %p\n", (void *)&a);
    printf("Alamat memori b : %p\n", (void *)&y);
    printf("KINI : a = %d b = %d\n", a, b);
}

//******** PERCOBAAN NOMER 1 ********//
void p10_tugas_percobaan_1()
{
    int var_x = 20;
    int *ptr1;
    int **ptr2;
    ptr1 = &var_x;
    ptr2 = &ptr1;
    *ptr1 = var_x + **ptr2;
    printf("Nilai var_x = *ptr1 = %d\n", *ptr1);
    printf("Nilai var_x = **ptr2 = %d\n\n", **ptr2);
    printf("ptr1 = &var_x = %p\n", ptr1);
    printf("ptr2 = &ptr1 = %p\n", ptr2);
    printf(" &ptr2 = %p\n", &ptr2);
}

//******** PERCOBAAN NOMER 2 ********//
int r, q = 10;              // VARIABEL PERCOBAAN NOMER 2
int go_crazy(int *, int *); // VARIABEL PERCOBAAN NOMER 2
void p10_tugas_percobaan_2()
{
    int *ptr1 = &q;
    int *ptr2 = &q;
    r = go_crazy(ptr2, ptr1);
    printf("q = %d, r = %d, *ptr1 = %d, *ptr2 = %d\n",
           q, r, *ptr1, *ptr2);
    ptr1 = &r;
    q = go_crazy(ptr1, ptr2);
    r = r * 5;
    q = q + r;
    printf("q = %d, r = %d, *ptr1 = %d, *ptr2 = %d\n",
           q, r, *ptr1, *ptr2);
}
int go_crazy(int *p1, int *p2)
{
    int x = 5;
    r = 12;
    *p2 = *p1 * 2;
    p1 = &x;
    return *p1 * 3;
}

//********** PERCOBAAN NOMER 3 ***********//
char strA[80] = "halo apa kabar"; // variabel percobaan nomer 3
char strB[80];                    // variabel percobaan nomer 3
void p10_tugas_percobaan_3()
{
    char *pA, *pB;
    puts(strA);
    pA = strA;
    puts(pA);
    pB = strB;
    putchar('\n');
    while (*pA != '\0')
    {
        *pB++ = *pA++;
    }
    *pB = '\0';
    puts(strB);
}

//********** PERCOBAAN NOMER 4 **************//
char *my_strcpy(char *, char *);
void p10_tugas_percobaan_4()
{
    char strA[80] = "A string to be used for demonstration";
    char strB[80];

    my_strcpy(strB, strA);
    puts(strB);
}
char *my_strcpy(char *destination, char *source)
{
    char *p = destination;
    while (*source != '\0')
    {
        *p++ = *source++;
    }
    *p = '\0';
    return destination;
}

//********** PERCOBAAN NOMER 5 **************//
// char *my_strcpy(char dest[], char source[])
// {
//     int i = 0;
//     while (source[i] != '\0')
//     {
//         dest[i] = source[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return dest;
// }
int main()
{
    p10_tugas_pendahuluan_1();
    //p10_tugas_percobaan_1();
    //p10_tugas_percobaan_2();
    //p10_tugas_percobaan_3();
    //p10_tugas_percobaan_4();
}