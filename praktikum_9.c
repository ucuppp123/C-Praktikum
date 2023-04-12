#include <stdio.h>>

char strA[80] = "A string to be used for demonstration"; // jawaban percobaan nomer 3, dadekno siji urut sesuai nomer line yan
char strB[80];                                           // jawaban percobaan nomer 3, dadekno siji urut seusai nomer line yan

void p9_tugas_pendahuluan_1()
{
    char *str = "halo apa kabar";
    printf("%s \n", str);                       // cetak
    printf("Alamat lokasi : %p", (void *)&str); // ilustrasi alokasi memori
}

void p9_tugas_pendahuluan_2()
{
    char *str = "TELEKOMUNIKASI";
    char *ptr = &str[2];                        // di variabelkan dalam bentuk array karena hanya dapat satu variabel dan bentuk array yang dapat menentukan alokasi memory
    printf("Huruf ketiga  : %c \n", *ptr);      // cetak dengan variabel pointer
    printf("Alamat lokasi : %p", (void *)&ptr); // penulisan code untuk mencari alokasi memori
}

void p9_tugas_percobaan_1()
{
    int x = 3, y = 4, z = 5;
    int *ix;
    int *iy;
    ix = &x;
    iy = &y;
    *ix = 6;
    *iy = *ix + z;
    z = x + y;
    printf("x = %d\n", x);
    printf("Alamat memori x : %p\n", (void *)&x); // cetak alamat memori variabel x
    printf("y = %d\n", y);
    printf("Alamat memori y : %p\n", (void *)&y); // cetak alamat memori variabel y
    printf("z = %d\n", z);
    printf("Alamat memori z : %p\n", (void *)&z); // cetak alamat memori variabel z
}

void p9_tugas_percobaan_2()
{
    int a = 16, b = 20, *ia, *ib;
    ia = &a;
    ib = &b;
    *ia = 5;
    ia = ib;
    *ib = *ia + 7;
    ia = &a;
    b = *ib / 4 * 5;
    printf("a = %d, b = %d, *ia = %d, *ib = %d", a, b, *ia, *ib);
}

void p9_tugas_percobaan_3()
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

int main(int argc, char const *argv[])
{
    // p9_tugas_pendahuluan_1();
    // p9_tugas_pendahuluan_2();
    // p9_tugas_percobaan_1();
    // p9_tugas_percobaan_2();
    p9_tugas_percobaan_3();
}