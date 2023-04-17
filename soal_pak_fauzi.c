#include <stdio.h>

// *** SOAL ZOOM DAN PPT NOMER 1 SAMA ****//

void latihan_waktu_zoom_nomer_1()
{
    int z = 20, s = 30, *pz, *ps;
    pz = &z;
    printf("Lokasi memori pz : %p\n", (void *)&pz);
    ps = &s;
    printf("Lokasi memori ps : %p\n", (void *)&ps);
    *pz += *ps;
    printf("Lokasi memori pz : %p\n", *pz);
    printf("Lokasi memori ps : %p\n", *ps);
    printf("z = %d\n", z);
    printf("Lokasi memori z : %p\n", (void *)&z);
    printf("s = %d\n", s);
    printf("Lokasi memori s : %p\n", (void *)&s);
}

void latihan_PPT_nomer_1()
{
    int z = 20, s = 30, *pz, *ps;
    pz = &z;
    printf("Lokasi memori pz : %p\n", (void *)&pz);
    ps = &s;
    printf("Lokasi memori ps : %p\n", (void *)&ps);
    *pz += *ps;
    printf("Lokasi memori pz : %p\n", *pz);
    printf("Lokasi memori ps : %p\n", *ps);
    printf("z = %d\n", z);
    printf("Lokasi memori z : %p\n", (void *)&z);
    printf("s = %d\n", s);
    printf("Lokasi memori s : %p\n", (void *)&s);
}

void latihan_PPT_nomer_2()
{
    int count = 10;
    int *temp;
    int sum = 7;
    temp = &count;
    printf("Lokasi memori temp : %p\n", *temp);
    printf("Lokasi memori temp : %p\n", (void *)&temp);
}

int main()
{
    //latihan_waktu_zoom_nomer_1();
    //latihan_PPT_nomer_1();
    latihan_PPT_nomer_2();
}
