// TODO LAPORAN RESMI
// TODO Kumpulkan listing program, ilustrasi alokasi memorinya beserta hasil eksekusinya
// *** PROGRAM IKI RUN NDE LAPTOPMU YAN, SESUAI SOAL ... by Jona ***/


#include <stdio.h>>

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
    printf("Alamat lokasi : %p", (void *)&ptr); // penulisan code untuk mencari alokasi memori huruf ketiga dari TELEKOMUNIKASI
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
    printf("Alamat memori ia                  : %p\n", (void *)&ia); // cetak alamat variabel ia
    ib = &b;
    printf("Alamat memori ib                  : %p\n", (void *)&ib); // cetak alamat variabel ib
    *ia = 5;
    printf("Alamat memori *ia = 5             : %p\n", (void *)&ia); // cetak alamat variabel ia
    ia = ib;
    printf("Alamat memori ia = ib             : %p\n", (void *)&ia); // cetak alamat variabel ia
    *ib = *ia + 7;
    printf("Alamat memori *ib = *ia + 7       : %p\n", (void *)&ib); // cetak alamat variabel ia
    ia = &a;
    printf("Alamat memori ia = &a             : %p\n", (void *)&ib); // cetak alamat variabel ia
    b = *ib / 4 * 5;
    printf("Alamat memori b = *b = ib / 4 * 5 : %p\n", (void *)&b); //  cetak alamat variabel b
    printf("a = %d, b = %d, *ia = %d, *ib = %d", a, b, *ia, *ib);
}

void p9_tugas_percobaan_3()
{
    char strA[80] = "A string to be used for demonstration"; // inisialisasi variabel
    char strB[80];                                           // setup memori
    char *pA, *pB;
    puts(strA); // puts = printf memakai string
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

    /*    ****STEP BY STEP PROCESS TUGAS PERCOBAAN NUM 3***
    1) Mendeklarasikan dua buah array bertipe character, yaitu 'strA' dan 'strB'. kemudian
    strA diisi dengan string "A string to be used for demonstration", sedangkan strB awalnya kosong.

    2) Mendeklarasikan dua buah pointer pA dan pB yang bertipe data char.

    3) Menampilkan string strA ke console dengan menggunakan fungsi puts().

    4) Menginisialisasi pointer pA dengan alamat dari array strA.

    5) Menampilkan isi dari array strA dengan menggunakan pointer pA.

    6) Menginisialisasi pointer pB dengan alamat dari array strB.

    7) Menampilkan baris baru ke terminal.

    8) Melakukan iterasi pada setiap data karakter dalam string 'strA' dengan menggunakan pointer 'pA', kemudian menyalin karakter tersebut ke array 'strB' dengan menggunakan pointer 'pB'. Setelah setiap karakter disalin, kedua pointer diincrement agar menunjuk ke karakter berikutnya dalam string

    9) Menambahkan null character pada akhir string strB.

    10) Menampilkan string 'strB' ke console dengan menggunakan fungsi puts(). Hasilnya adalah string yang sama dengan 'strA', karena program menyalin isi dari variable 'strA' ke 'strB'.
    */
}

void p9_tugas_percobaan_4()
{
    int a[5] = {2, 4, 8, 1, 23};
    int c = 5;
    int *ptr1 = &c;
    int *ptr2 = a;

    // *** STATEMENT SOAL***
    // SING SALAH SANDINGE TAK TULIS 'SALAH'
    // SING BENER SANDINGE TAK TULIS 'BENER
    //  a = c ;                << SALAH
    // *c = 6;                 << SALAH
    // a[2] = c;               << BENER
    // *ptr2 = c;              << BENER
    // &ptr1 = c;              << SALAH
    // *(ptr2 + 1) = *(a + 3); << BENER
    // c = *(ptr2 + 1);        << BENER
    // c = &ptr1;              << BENER
    // c = a[3] + 2;           << BENER
    // *(ptr2 + 2) = *ptr1;    << BENER
}

void p9_tugas_percobaan_5()
{
    int array1[5] = {10, 25, 35, 45, 50};
    int array2[5], i;
    int *ip1, *ip2 = array2;
    int *akhir = &array1[5];
    for (ip1 = &array1[0]; ip1 < akhir; ip1++)
    {
        *ip2++ = *ip1;
    }
    for (i = 0; i < 5; i++)
        printf("(%d) Lokasi Memori : %p\n", array2[i], (void *)&array2[i]);
}

int main(int argc, char const *argv[])
{
    // *** PILIH FUNCTION YANG DIJALANKAN TINGGAL UNCOMMENT CODING DI BAWAH INI ***//
    // p9_tugas_pendahuluan_1();
    // p9_tugas_pendahuluan_2();
    // p9_tugas_percobaan_1();
    // p9_tugas_percobaan_2();
    // p9_tugas_percobaan_3();
    // p9_tugas_percobaan_4();
    // p9_tugas_percobaan_5();
}