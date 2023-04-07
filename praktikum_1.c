#include <stdio.h>
#include <string.h>

void p1_percobaan_1()
{
    char nama[15];
    int u;
    char notelp[13];
    printf("Masukkan data diri anda :\n");
    printf("Nama : ");
    gets(nama);
    printf("Umur : ");
    scanf("%d", &u);
    printf("Nomor telfon : ");
    scanf("%s", notelp);
    printf("\n");
    printf("Hello %s, umur %d, no telp %s\n", nama, u, notelp);
    printf("Bagaimana kabar anda hari ini?");
}

void p1_percobaan_2()
{
    int v, s, t;
    printf("Masukkan kecepatan dan waktu mobil anda\n");
    printf("kecepatan (m/s) = ");
    scanf("%d", &v);
    printf("waktu (detik)= ");
    scanf("%d", &t);
    printf("Jadi jarak tempuh (m) anda adalah %d meter", v * t);
}

void p1_percobaan_3()
{
    int a, b, c;
    printf("Masukkan nilai a = ");
    scanf("%d", &a);
    printf("Masukkan nilai b = ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("jadi bilangan pertama adalah %d\n", a, b);
    printf("jadi bilangan kedua adalah %d", b, a);
}

void p1_percobaan_4()
{
    int v, p, l, t;
    printf("Masukkan nilai p = ");
    scanf("%d", &p);
    printf("Masukkan nilai l = ");
    scanf("%d", &l);
    printf("Masukkann nilai t = ");
    scanf("%d", &t);
    v = p * l * t;
    printf("jadi volumenya adalah %d cm kubik", v);
}

void uji_coba_luas_1()
{
    float Luas;
    float x = 5;
    float y = 6;
    Luas = x / y;
    printf("Hasil Luas tersebut adalah %f cm", Luas);
}

void uji_coba_luas_2()
{
    float x = 0.5; // ½= 0.5
    float y = 3.14;
    float z = 5;
    float l;
    l = x * y * z;
    printf("Hasil luas tersebut adalah %.2f", l);
}

void uji_coba_luas_3()
{
    float x = 0.5;
    float y = 3.14;
    float z = 5;
    float l;
    l = x * y * z;
    printf("Hasil luas tersebut adalah %.2f", l);
}

int main()
{
    // p1_percobaan_1();
    // p1_percobaan_2();
    // p1_percobaan_3();
    // p1_percobaan_4();
    // uji_coba_luas_1();
    // uji_coba_luas_2();
    //uji_coba_luas_3();
}
