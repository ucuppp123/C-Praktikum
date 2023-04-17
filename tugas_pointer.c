//*** TUGAS BY JONO IKI BOSSS ***//

#include <stdio.h>

// *** SOAL ZOOM DAN PPT NOMER 1 SAMA ****//
/* CARA PRINTF ALOKASI MEMORI SEBUAH VARIABEL
printf("Lokasi memori pz : %p\n", (int *)&pz);
printf("Lokasi memori pz : %p\n", (void *)&pz);
printf("Lokasi memori pz : %p\n", &pz);
*/
//! CONTOH PEMBUKTIAN MEMORI DENGAN POINTER DAN VARIABEL
// int z = 20, *pz
// pz = z
// printf("Nilai dari z : %d\n", z);
// printf("Nilai dari z : %d\n",*pz);

// TODO SEKILAS PENJELASAN
/*  pz hanya sebuah variabel
    sedangkan *pz adalah alamt memori dari varaibel pz
    jika pz = z dan mencetak pz dengan variabel %p lalu (void/int *)pz maka akan tercetak alamat memori z
    jika pz = z dan mencetak pz dengan variabel %p lalu (void/int *)&pz maka akan tercetak alamat memori z
*/

//******* COMMENT NEK NDUWUR KALIMAT IKI GAUSAH DILEBOKNE CAH by.Jono  ******/////

void latihan_waktu_zoom_nomer_1()
{
    int z = 20, s = 30, *pz, *ps;
    pz = &z;                                       // membuat variabel pz, mengakses alamat memori z
    printf("nilai z          : %d\n", *pz);        // cetak nilai z dengan penunjuk alamat dari pointer pz
    printf("Lokasi memori pz : %p\n", (int *)pz);  // dia akan mencetak alamat memori dari z karena pz = z
    printf("Lokasi memori pz : %p\n", (int *)&pz); // dia akan mencetak alamat memori dari pz karena tanda (&)
    ps = &s;                                       // membuat variabel ps, mengakses alamat memori s
    printf("nilai s : %d\n", *ps);                 // cetak nilai s dengan penunjuk alamat dari pointer ps
    printf("Lokasi memori ps : %p\n", (int *)ps);  // dia akan mencetak alamat memori dari s karena ps = s
    printf("Lokasi memori ps : %p\n", (int *)&ps); // dia akan mencetak alamat memori dari ps karena tanda (&)
    *pz += *ps;
    printf("Lokasi memori pz : %p\n", &pz); // cetak alamat memori dari pointer pz
    printf("Lokasi memori ps : %p\n", &ps); // cetak alamat memori dari pointer ps
    printf("z = %d\n", z);
    printf("s = %d\n", s);
}

//** SOAL LATIHAN ZOOM DAN SOAL PPT NOMER 1, SOALNYA SAMA  **//

void latihan_PPT_nomer_1()
{
    int z = 20, s = 30, *pz, *ps;
    pz = &z;                                       //<---  membuat variabel pz, mengakses alamat memori z
    printf("nilai z          : %d\n", *pz);        //<---  cetak nilai z dengan penunjuk alamat dari pointer pz
    printf("Lokasi memori pz : %p\n", (int *)pz);  //<---  dia akan mencetak alamat memori dari z karena pz = z
    printf("Lokasi memori pz : %p\n", (int *)&pz); //<---  dia akan mencetak alamat memori dari pz karena tanda (&)
    ps = &s;                                       //<---  membuat variabel ps, mengakses alamat memori s
    printf("nilai s : %d\n", *ps);                 //<---  cetak nilai s dengan penunjuk alamat dari pointer ps
    printf("Lokasi memori ps : %p\n", (int *)ps);  //<---  dia akan mencetak alamat memori dari s karena ps = s
    printf("Lokasi memori ps : %p\n", (int *)&ps); //<---  dia akan mencetak alamat memori dari ps karena tanda (&)
    *pz += *ps;
    printf("Lokasi memori pz : %p\n", &pz); //<---  cetak alamat memori dari pointer pz
    printf("Lokasi memori ps : %p\n", &ps); // <--- cetak alamat memori dari pointer ps
    printf("z = %d\n", z);
    printf("s = %d\n", s);
}

void latihan_PPT_nomer_2()
{
    int count = 10, *temp, sum = 7;
    temp = &count;                                                   // <--- variable temp mengakses data pada memori count yang bernilai 10
    printf("Nilai temp == count              : %d\n", *temp);        // <--- bukti variabel temp mengakses data dari alokasi memori count
    printf("lokasi memori temp               : %p\n", &temp);        // <--- Alamat memori temp
    printf("Lokasi memori yang diakses count : %p\n", &count);       // <--- menunjukkan variabel temp dan count mengakses alam memori yang sama
    printf("lokasi memori yang diakses temp  : %p\n", temp);         // <--- menunjukkan variabel temp dan count mengakses alam memori yang sama
    *temp = 32;                                                      // <--- mengubah nilai memori yang diakses temp dan count menjadi 32
    printf("Nilai temp == 32                 : %d\n", count);        // <--- bukti nilai memori yqang diakses temp dan count menjadi 32
    printf("alamat memori temp               : %p\n", (int *)&temp); // <--- menunjukkan alamat memori temp tetap sama
    printf("Lokasi memori yang diakses temp  : %p\n", temp);         // <--- bukti menunjukkan bahwa temp masih mengakses alamat memori dari count yang datanya sudah berubah menjadi 32
    temp = &sum;                                                     // <--- mengarahkan variabel temp untuk mengakses data pada memori sum yang bernilai 7
    printf("Nilai temp == sum                : %d\n", *temp);        // <--- bukti nilai memori yang diakses temp yaitu data pada varaibel sum
    printf("Lokasi memori dari sum           : %p\n", &sum);         // <--- lokasi memori variabel sum
    printf("Lokasi memori yang diakses temp  : %p\n", temp);         // <--- bukti variabel temp mengakses data pada lokasi memori variabel sum
    *temp = count;                                                   // <--- data dari alamat memori yang diakses variabel temp diubah menjadai data milik variabel count yaitu 32
    printf("Nilai sum                        : %d\n", sum);          // <--- bukti nilai memori pada sum yang diakses variabel temp berubah menjadi nilai dari memroi count yaitu 32
    printf("Lokasi memori yang diakses temp  : %p\n", temp);         // <--- bukti variabel temp masih mengakses lokasi memori variabel sum
    sum = *temp * 4;                                                 // <--- mengubah data dari memori yang diakses temp, dengan mengalikan (4) data yang diakses varaibel temp
    printf("Lokasi memori yang diakses temp  : %p\n", temp);         // <--- bukti temp masih mengakses lokasi memori sum
    printf("count = %d\n", count);                                   // <--- cetak hasil akhir data lokasi memori count
    printf("temp  = %d\n", *temp);                                   // <--- cetak hasil akhir data dari lokasi yang diakses temp
    printf("sum   = %d\n", sum);                                     // <--- cetak hasil akhir data lokasi memori sum
}

void latihan_PPT_nomer_3()
{
    int i1, i2, *p1, *p2;
    i1 = 9;                                                      // <--- inisialisasi bahwa variabel i1 mengaksies lokasi data konstan 9
    printf("Lokasi memori i1              : %p\n", &i1);         // <--- Bukti alokasi memori milik variabel i1
    printf("Nilai dari i1                 : %d\n", i1);          // <--- Bukti alokasi memori milik variabel i1 sudah memiliki data interger
    p1 = &i1;                                                    // <--- variabel p1 mengakses data yang diaskes variabel i1
    printf("Lokasi memori p1              : %p\n", &p1);         // <--- lokasi memori p1
    printf("Lokasi memori yang diakses p1 : %p\n", p1);          // <--- bukti variabel p1 mengakses lokasi memori variabel i1
    i2 = *p1;                                                    // <--- variabel i2 mengakses lokasi memori yang diakses variabel p1, dan melakukan operasi matematika pada data yang diakses variabel p1
    printf("Nilai data i1                 : %d\n", i2);          // <--- nilai data i1 berubah
    printf("Lokasi memori i2              : %p\n", &i2);         // <--- lokasi memori i2
    printf("Lokasi memori yang diakses i2 : %p\n", (void *)&i2); // <---- lokasi memori yang diakses i2
    p2 = p1;
    printf("i1 = %d, i2 = %d, p1 = %d, p2 = %d\n", i1, i2, *p1, *p2);
}

int main()
{
    //** OJO LALI PROGRAME DI RUN HASILE DI SCREENSHOT MAS WAYAN :) **//
    // TODO untuk nge RUN programnya, silahkan uncomment code di bawah ini untuk menjalankan function
    // latihan_waktu_zoom_nomer_1();
    // latihan_PPT_nomer_1();
    // latihan_PPT_nomer_2();
    // latihan_PPT_nomer_3();
}
