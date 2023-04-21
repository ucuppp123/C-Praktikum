// TODO Laporan Resmi
// TODO Kumpulkan listing program, ilustrasi alokasi memorinya beserta hasil eksekusinya
// *** PROGRAM IKI RUN NDE LAPTOPMU YAN, SESUAI SOAL ... by Jona ***/
// *** DI RUN PROGRAME LAK MISAL ENEK SOAL "Serta gambarkan ilustrasi alokasi memori"
//*** SOAL 1 SAMPAI 4 LISTING PROGAM DAN BUKTI ALOKASI MEMORI BRARTTI KODINGANE DI COPAS DAN DI RUN LALU SCREENSHOT HASILE
//*** SOAL 5 HANYA BANDINGKAN FUNCTION SAJA  IKI RUN NDE LAPTOPMU DAN DI SCREENSHOT HASILE

#include <stdio.h>

//******** PENDAHULUAN NOMER 1 ********//
void p10_tugas_pendahuluan_1()
{
    int a = 4;
    int b = 7;
    int *x, *y;
    x = &a;
    y = &b;
    printf("Alamat memori a                      : %p\n", &a);
    printf("Alamat memori b                      : %p\n", &b);
    printf("Bukti Alamat memori x mengacu pada a : %p\n", x);  //<--- PENJELASAN
    printf("Bukti Alamat memori y mengacu pada b : %p\n", y);  //<--- PENJELASAN
    printf("Bukti nilai variabel x = a           : %i\n", *x); //<--- PENJELASAN
    printf("Bukti nilai variabel y = b           : %i\n", *y); //<--- PENJELASAN
    printf("SEMULA : a = %d b = %d\n", a, b);
    *x = *x * 4;
    printf("Dalam statement *x = *x * 4 nilai yang diakses *x menjadi : %i\nkarena *x mengakses data memori variabel a, sehingga mengubah 4 menjadi %i\n", a, a); //<--- PENJELASAN
    *y = *y + *x;
    printf("Dalam statement *y = *y + *x nilai yang diakses *y menjadi : %i\nkarena *y mengakses data memori variabel b, sehingga mengubah 7 menjadi %i\n", b, b); //<--- PENJELASAN
    printf("KINI : a = %d b = %d\n", a, b);
}

//******** PERCOBAAN NOMER 1 ********//
void p10_tugas_percobaan_1()
{
    int var_x = 20;
    int *ptr1;
    int **ptr2;
    printf("Nilai data pada var_x   : %i\n", var_x);  //<--- PENJELASAN
    printf("Alamat memori var_x     : %p\n", &var_x); //<--- PENJELASAN
    ptr1 = &var_x;
    printf("Bukti variabel ptr1 mengakses alamat memori var_x dalam statement ptr1 = &var_x : %p\n", ptr1);  //<--- PENJELASAN
    printf("Bukti variabel ptr1 memiliki data yang sama dengan variabel var_x               : %i\n", *ptr1); //<--- PENJELASAN
    ptr2 = &ptr1;
    printf("Lokasi memori variabel ptr1                                                     : %p\n", &ptr1);  //<--- PENJELASAN
    printf("Bukti variabel ptr2 mengakses alamat memori ptr1 dalam statement ptr2 = &ptr1   : %p\n", ptr2);   //<--- PENJELASAN
    printf("Bukti variabel ptr2 memiliki data yang sama dengan variabel ptr1 dan var_x      : %i\n", **ptr2); //<--- PENJELASAN
    *ptr1 = var_x + **ptr2;
    printf("Dalam statement *ptr1 = var_x + **ptr2 nilai dari ptr1 menjadi                  : %i\n", *ptr1); //<--- PENJELASAN
    printf("Hal ini dikarenakan *ptr1 mengakses memori var_x yang berilai 20, dan ditambah **ptr2, dimana **ptr2 yang juga mengakses var_x dengan data 20\n");
    printf("sehingga muncul nilai 40 yang berasal dari 20+20 = 40 dimana sesuai dengan statement *ptr1 = var_x + **ptr2 \n"); //<--- PENJELASAN
    printf("Nilai var_x = *ptr1   = %d\n", *ptr1);
    printf("Nilai var_x = **ptr2  = %d\n", **ptr2);
    printf("ptr1 = &var_x         = %p\n", ptr1);
    printf("ptr2 = &ptr1          = %p\n", ptr2);
    printf(" &ptr2                = %p\n", &ptr2);
}

//******** PERCOBAAN NOMER 2 ********//
int r, q = 10;              // VARIABEL PERCOBAAN NOMER 2
int go_crazy(int *, int *); // VARIABEL PERCOBAAN NOMER 2
void p10_tugas_percobaan_2()
{

    int *ptr1 = &q;
    int *ptr2 = &q;
    printf("Lokasi memori variabel ptr1 = %p\n", &ptr1);
    printf("Lokasi memori variabel ptr2 = %p\n", &ptr2);
    printf("Lokasi memori variabel q    = %p\n", (int *)&q);
    printf("Lokasi memori variabel r    = %p\n", (int *)&r);
    printf("Bukti variabel ptr 1 mengakses memori variabel q = %p\n", ptr1);
    printf("Bukti variabel ptr 2 mengakses memori variabel q = %p\n", ptr2);
    printf("Nilai variabel q yang di akses variabel ptr1 dan ptr2, dan juga di inputkan dalam function go_crazzy  = %i\n", *ptr1);
    printf("Lokasi memori function go_crazy                                                                       = %p\n", (void *)&go_crazy);
    printf("Nilai pada data yang diakses ptr1 yang mengacu sebelum statement r = go_crazy(ptr2, ptr1); yaitu r    = %i\n", *ptr1);
    printf("Nilai pada data yang diakses ptr2 yang mengacu sebelum statement r = go_crazy(ptr2, ptr1); yaitu q    = %i\n", *ptr2);
    r = go_crazy(ptr2, ptr1); //<--- DALAM KONDISI INI ptr2 = q, ptr 1= q, sedangkan q = 10
    printf("Nilai pada data yang diakses ptr1 yang mengacu setelah statement r = go_crazy(ptr2, ptr1); yaitu r = %i\n", *ptr1);
    printf("Nilai pada data yang diakses ptr2 yang mengacu setelah statement r = go_crazy(ptr2, ptr1); yaitu q = %i\n", *ptr2);
    printf("Lokasi memori variabel r                                                                   = %p\n", (int *)&r);
    printf("Bukti variabel ptr1 masih mengakses lokasi memori q dan diteruskan pada function go crazzy = %p\n", ptr1);
    printf("Bukti variabel ptr2 masih mengakses lokasi memori q dan diteruskan pada function go crazzy = %p\n", ptr2);
    printf("Dikarenakan statement return *p1 * 3 pada function go_crazzy, akhirnya merubah nilai data pada alamat yang ditunjuk *p1\n"); //  <<----- PENJELASAN FUNCTION go_crazzy
    printf("menjadi 15, yang kemudian dikembalikan ke program utama, yaitu ke variabel r\n");                                            //  <<----- PENJELASAN FUNCTION go_crazzy
    printf("q \t= %d\nr \t= %d\n*ptr1   = %d\n*ptr2   = %d\n", q, r, *ptr1, *ptr2);
    ptr1 = &r;
    // printf("Alokasi memori variabel r                     = %p\n", &r);
    // printf("Lokasi memori yang diakses ptr1 sama dengan r = %p\n", ptr1);
    // printf("Nilai variabel ptr1                           = %i\n", *ptr1);
    // printf("Alokasi memori variabel q                     = %p\n", &q);
    // printf("Lokasi memori yang diakses ptr2 sama dengan q = %p\n", ptr2);
    // printf("Nilai variabel ptr2                           = %i\n", *ptr2);
    printf("Nilai pada data yang diakses ptr1 yang mengacu sebelum statement q = go_crazy(ptr1, ptr2); yaitu r  = %i\n", *ptr1);
    printf("Nilai pada data yang diakses ptr2 yang mengacu sebelum statement q = go_crazy(ptr1, ptr2); yaitu q  = %i\n", *ptr2);
    q = go_crazy(ptr1, ptr2); //<--- DALAM KONDISI INI ptr2 = q, ptr 1 = r, kemudian q = 20 dan r = 15
    printf("Nilai pada data yang diakses ptr1 yang mengacu setelah statement q = go_crazy(ptr1, ptr2);  yaitu r = %i\n", *ptr1);
    printf("Nilai pada data yang diakses ptr2 yang mengacu setelah statement q = go_crazy(ptr1, ptr2);  yaitu q = %i\n", *ptr2);
    r = r * 5;
    q = q + r;
    printf("q \t= %d\nr \t= %d\n*ptr1   = %d\n*ptr2   = %d\n", q, r, *ptr1, *ptr2);
}
int go_crazy(int *p1, int *p2)
{
    //*** PENJELASAN ALOKASI MEMORI FUNCTION go_crazzy pada soal percobaan nomer 2  ***//
    //**** PENJELASAN SAAT FUNCTION go_crazzy TERPANGGIL PADA STATEMENT  R = go_crazy(ptr2, ptr1) ******//
    int x = 5;
    printf("Lokasi memori variabel x                                          = %p\n", (int *)&x); //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel *p1                                        = %p\n", &p1);       //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel *p2                                        = %p\n", &p2);       //<--- TAMBAHAN PENJELASAN
    printf("Bukti ptr1 mengakses lokasi memori yang sama dengan variabel *p1  = %p\n", p1);        //<--- TAMBAHAN PENJELASAN
    printf("Bukti ptr2 mengakses lokasi memori yang sama dengan variabel *p1  = %p\n", p2);        //<--- TAMBAHAN PENJELASAN
    r = 12;
    printf("Lokasi memori variabel r                                          = %p\n", (int *)&r); //<--- TAMBAHAN PENJELASAN
    printf("Nilai data pada variabel r                                        = %i\n", r);         //<--- TAMBAHAN PENJELASAN
    *p2 = *p1 * 2;
    printf("Pada statement *p2 = *p1 * 2 menyatakan lokasi memori yang diakses *p2 yaitu q");
    printf("sama dengan *p1 dikali 2, yang berarti dimana *p1 juga mengakses memori variabel q yaitu 10, maka 10 dikali 2 = 20, hingga merubah nilai pada variabel q menjadi 20\n");
    printf("Bukti bahwa nilai pada variabel q berubah, dikarenakan statement *p2 = *p1 * 2, nilai pada data q menjadi = %i\n", q);
    p1 = &x;
    printf("Nilai data pada variabel x = %i\n", x);                                //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel x   = %p\n", &x);                               //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel p1  = %p\n", &p1);                              //<--- TAMBAHAN PENJELASAN
    printf("Nilai pada variabel p1 yang sama dengan variabel x      = %i\n", *p1); //<--- TAMBAHAN PENJELASAN
    printf("Bukti variabel p1 mengakses data pada memori variabel x = %p\n", p1);  //<--- TAMBAHAN PENJELASAN
    return *p1 * 3;                                                                // <---  mengembalikan nilai 20 pada variabel r dikarenakan statement  r = go_crazy(ptr2, ptr1)

    //**** PENJELASAN SAAT FUNCTION go_crazzy TERPANGGIL PADA STATEMENT  q = go_crazy(ptr1, ptr2) ******//
    /*
    int x = 5;
    printf("Lokasi memori variabel x                                          = %p\n", (int *)&x);           //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel *p1                                        = %p\n", &p1);                 //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel *p2                                        = %p\n", &p2);                 //<--- TAMBAHAN PENJELASAN
    printf("Bukti *p1 mengakses lokasi memori yang sama dengan variabel r     = %p\n", p1);                  //<--- TAMBAHAN PENJELASAN
    printf("Bukti *p1 mengakses lokasi memori yang sama dengan variabel ptr2  = %p\n", p2);                  //<--- TAMBAHAN PENJELASAN
    r = 12;
    printf("Lokasi memori variabel r                                          = %p\n", (int *)&r);           //<--- TAMBAHAN PENJELASAN
    printf("Nilai data pada variabel r                                        = %i\n", r);                   //<--- TAMBAHAN PENJELASAN
    *p2 = *p1 * 2;
    printf("Pada statement *p2 = *p1 * 2 menyatakan lokasi memori yang diakses *p2 yaitu q");
    printf("sama dengan *p1 dikali 2, yang berarti dimana *p1 juga mengakses memori variabel r yaitu 12, maka 12 dikali 2 = 24, hingga merubah nilai pada variabel q menjadi 24\n");
    printf("Bukti bahwa nilai pada variabel q berubah, dikarenakan statement *p2 = *p1 * 2, nilai pada data q menjadi = %i\n", q);
    p1 = &x;
    printf("Nilai data pada variabel x = %i\n", x);                                 //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel x   = %p\n", &x);                                //<--- TAMBAHAN PENJELASAN
    printf("Lokasi memori variabel p1  = %p\n", &p1);                               //<--- TAMBAHAN PENJELASAN
    printf("Nilai pada variabel p1 yang sama dengan variabel x      = %i\n", *p1);  //<--- TAMBAHAN PENJELASAN
    printf("Bukti variabel p1 mengakses data pada memori variabel x = %p\n", p1);   //<--- TAMBAHAN PENJELASAN
    return *p1 * 3;               <--- mengembalikan nilai 15 pada pada variabel q dikarenakan statement  q = go_crazy(ptr1, ptr2)
    */
}

//********** PERCOBAAN NOMER 3 ***********//
char strA[80] = "halo apa kabar"; // variabel percobaan nomer 3
char strB[80];                    // variabel percobaan nomer 3
void p10_tugas_percobaan_3()
{
    char *pA, *pB;
    printf("Alokasi memori pA   = %p\n", &pA);           //<--- PENJELASAN EKSTERNAL
    printf("Alokasi memori pB   = %p\n", &pB);           //<--- PENJELASAN EKSTERNAL
    printf("Alokasi memori strA = %p\n", (char *)&strA); //<--- PENJELASAN EKSTERNAL
    printf("Alokasi memori strB = %p\n", (char *)&strB); //<--- PENJELASAN EKSTERNAL
    puts(strA);
    pA = strA;
    printf("Bukti pA mengakses memori strA = %p\n", pA); //<--- PENJELASAN EKSTERNAL
    puts(pA);
    pB = strB;
    printf("Bukti pB mengakses memori strB = %p\n", pB); //<--- PENJELASAN EKSTERNAL
    putchar('\n');
    while (*pA != '\0')
    {
        *pB++ = *pA++; //<--- PROSES PENYALINAN CHAR PER CHAR DENGAN INCREMENT SELAMA *pA tidak sama dengan NULL
    }
    *pB = '\0';
    puts(strB);
}
/*
    STEP BY STEP PENJELASAN PERCOBAAN NOMER 3
   1. char strA[80] = "halo apa kabar";
   mendefinisikan sebuah array karakter dengan nama 'strA'. Array ini diinisialisasi dengan string "halo apa kabar".
   Ketika program dijalankan, sistem akan mengalokasikan 80 byte memori untuk variabel ini.

   2. char strB[80];
   Kode di atas mendefinisikan sebuah array karakter lain dengan nama 'strB'. Array ini tidak diinisialisasi dengan nilai awal apapun.
   Ketika program dijalankan, sistem akan mengalokasikan 80 byte memori lagi untuk variabel ini.

   3. char *pA *pB
   mendefinisikan dua pointer karakter dengan nama pA dan pB.

   4. puts(strA);
   mencetak string "halo apa kabar" ke terminal.

   5. pA = strA;
   menginisialisasi pointer pA dengan alamat memori array strA

   6. puts(pA);
   mencetak string yang ditunjuk oleh pointer 'pA' ke terminal. Karena pointer pA menunjuk ke alamat memori array strA,
   maka string yang dicetak sama dengan string yang dicetak pada baris sebelumnya.

   7. pB = strB;
   menginisialisasi pointer 'pB' dengan alamat memori array 'strB'.

   8. while (*pA != '\0')
     {*pB++ = *pA++;}
        *pB = '\0';
    menyalin string yang ditunjuk oleh 'pA' ke dalam array 'strB', dengan cara menyalin setiap karakter dari 'pA' ke 'pB' dengan fungsi increment, dan menggeser pointer 'pA' dan 'pB' ke karakter berikutnya,
    sampai karakter NULL/(0) ditemukan pada string yang ditunjuk 'pA'. Setelah itu, kode di atas menambahkan karakter NULL ke akhir string yang ditunjuk 'pB', untuk mengakhiri string tersebut.

    9. puts(strB);
     mencetak string yang ada pada array 'strB', yang sudah terisi oleh string yang sama dengan 'strA' dari fungsi while dan increment sebelumnya.

*/
//********** PERCOBAAN NOMER 4 **************//
char *my_strcpy(char *, char *);
void p10_tugas_percobaan_4()
{
    char strA[80] = "A string to be used for demonstration";
    char strB[80];

    printf("Alokasi memori variabel 'strB'                     = %p\n", (char *)&strB);
    printf("Alokasi memori variabel 'strA'                     = %p\n", (char *)&strA);
    my_strcpy(strB, strA); // SEPERTI NOMER 3, NAMUN PROSES PENYALINAN STRINGNYA DIBUATKAN KE FUNCTION my_strcpy
    puts(strB);
}
char *my_strcpy(char *destination, char *source)
{
    char *p = destination;
    printf("Bukti pointer 'p' mengakses variabel 'destination' = %p\n", p);
    printf("Alokasi memori yang diakses variabel 'destination' sama dengan 'strB' = %p\n", destination);
    printf("Alokasi memori yang diakses variabel 'source' sama dengan 'strA'      = %p\n", source);
    while (*source != '\0')
    {
        *p++ = *source++; // PROSES PENYALINAN STRING PER CHARACTER DENGAN INCREMENT
    }
    *p = '\0';
    return destination; // mengembalikan nilai ke 'strB' karena parameter 'destination' sama dengan 'strB' saat dilakukan pemanggilan fungsi my_strcpy
}

/* ILUSTRASI ALOKASI MEMORI DAN STEP BY STEP PENJELASANNYA !!!!!!!

    1. char *my_strcpy(char *, char *);
    mendeklarasikan fungsi my_strcpy yang mengambil dua parameter bertipe pointer ke char
    yaitu char * untuk destination dan source. Fungsi ini akan mengembalikan pointer bertipe char *.

    2. char strA[80] = "A string to be used for demonstration";
    mendeklarasikan variabel 'strA' dengan tipe array char. 'strA' diinisialisasi dengan string "A string to be used for demonstration".

    3. char strB[80];
    mendeklarasikan 'strB' dengan tipe array char.

    4. my_strcpy(strB, strA);
    pemanggilan fungsi my_strcpy yang mengirimkan strB dan strA sebagai parameter.
    Fungsi my_strcpy menyalin isi dari strA ke strB dengan proses increment.

    5. char *my_strcpy(char *destination, char *source)
    mendeklarasikan fungsi my_strcpy, yang mengambil dua parameter, yaitu destination dan source, yang sudah dideklarasikan sebelumnya.

    6. char *p = destination;
    mendeklarasikan variabel bertipe char * dengan nama p yang diinisialisasi dengan variabel destination.
    Variabel p akan digunakan untuk mengakses alokasi memori variabel destination

    7. while (*source != '\0')
    {*p++ = *source++;}
    digunakan sebuah looping while untuk menyalin isi dari 'source' yan mengakses variabel 'strA' ke 'destination' yang mengakses 'strB'
    sampai karakter null/(\0) true. Dalam while ini, data dari 'source' akan ditambahkan secara bergantian ke 'destination' atau 'ke strB'
    dan nilai p juga akan ikut bertambah.

    8. return destination;
    dilakukan pengembalian nilai 'destination'  ke variabel 'strB'.

    9. puts(strB);
    dalam statement ini 'strB' sudah memiliki nilai yang disalin 'dari strA' yang penyalinan nilai tersebut dilakukan pada
    fungsi my_strcpy, dengan cara deklarasi variabel baru untuk mengakses memori 'destinantion' yang mengakses memori 'strB',
    dan melakukan increment pada variabel baru tersebut di sama dengankan increment 'source++' yang mengacu pada nilai data 'strA'
    kemudia n setelah tersalin , lalu menampilkan variabel 'strB' ke terminal yang sudah memiliki nilai
*/

//********** PERCOBAAN NOMER 5 **************//
//** HANYA MEMBANDINGKAN FUNCTION UNTUK NOMER 4 ***//
char *my_strcpy(char dest[], char source[])
{
    int i = 0;
    printf("Alokasi memori yang diakses variabel 'dest[i]' sama dengan 'strB'   = %p\n", dest);
    printf("Alokasi memori yang diakses variabel 'source[i]' sama dengan 'strA' = %p\n", source);
    while (source[i] != '\0')  // while akan berhenti jika nilai data yang diakses source (strA), bernilai NULL/(0)
    {
        dest[i] = source[i];   // Proses penyalinan char per char antar variabel array 'dest' dan array 'source', dengan memanfaatkan I untuk Menambah alokasi memori penyimpanan array
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/* ILUSTRASI ALOKASI MEMORI DAN STEP BY STEP PENJELASANNYA NAMUN MENGGUNAKAN FUNCTION NOMER 5 !!!!!!!

    1. char *my_strcpy(char *, char *);
    mendeklarasikan fungsi my_strcpy yang mengambil dua parameter bertipe pointer ke char
    yaitu char * untuk destination dan source. Fungsi ini akan mengembalikan pointer bertipe char *.

    2. char strA[80] = "A string to be used for demonstration";
    mendeklarasikan variabel 'strA' dengan tipe array char. 'strA' diinisialisasi dengan string "A string to be used for demonstration".

    3. char strB[80];
    mendeklarasikan 'strB' dengan tipe array char.

    4. my_strcpy(strB, strA);
    pemanggilan fungsi my_strcpy yang mengirimkan strB dan strA sebagai parameter.
    Fungsi my_strcpy menyalin isi dari strA ke strB dengan proses increment.

    5. char *my_strcpy(char dest[], char source[])
    mendeklarasikan fungsi my_strcpy, yang mengambil dua parameter, yaitu 'dest[]' dan 'source[]' bertipe array, yang sudah dideklarasikan sebelumnya.

    6. int i = 0;;
    mendeklarasikan variabel i = o untuk melakukan increment

    7. while (source[i] != '\0')
    {dest[i] = source[i];
        i++;}
    while akan berhenti jika nilai data yang diakses source (strA), bernilai NULL/(0), kemudian adanya
    Proses penyalinan char per char antar variabel array 'dest' dan array 'source', dengan memanfaatkan variabel 'i' untuk Menambah 
    alokasi memori penyimpanan array dan untuk menampilkan nilai data berikutnya pada array 'source' untuk disalin

    8. return dest;
    dilakukan pengembalian nilai 'dest' ke variabel 'strB'.

    9. puts(strB);
    dalam statement ini 'strB' sudah memiliki nilai yang disalin 'dari strA' yang penyalinan nilai tersebut dilakukan pada
    fungsi my_strcpy, dengan cara deklarasi variabel baru untuk mengakses memori 'destinantion' yang mengakses memori 'strB',
    dan melakukan increment pada variabel baru tersebut di sama dengankan increment 'source++' yang mengacu pada nilai data 'strA'
    kemudia n setelah tersalin , lalu menampilkan variabel 'strB' ke terminal yang sudah memiliki nilai
*/


//*** KESIMPULAN PENGGUNAAN FUNCTION ANTARA NOMER 4 DAN 5   *****//
/*
    Pada nomer 4 function my_strcpy menggunakan parameter pointer untuk menyalin datanya sehingga menggunakan 
    syntax *p++ (pointer increment) untuk menyalin, sedangkan
    Pada nomer 5 function my_strcpy menggunakan parameter array untuk menyalin datanya sehingga mengguanakan   
    syntax dest[i] = source[i], kemudian diikuti i++, dimana source[i] berguna untuk menampilkan nilai data yang akan disalin
    sedangkan dest[i] untuk menyiapkan alokasi memori untuk setiap se per data yang akn disalin, dan i++
    untuk penambah penyimpanan pada dest[i] maupun penampil data pada source[i]. 
*/


int main()
{
    //**** SILAHKAN UNCOMMENT KODE DIBAWAH UNTUK MENJALANKAN MASING-MASING SOAL ****/
    //**** KHUSUS p10_tugas_percobaan_4(), ITU  UNTUK SOAL NOMER 4 DAN 5, KARENA HANYA MEMBANDINGKAN FUNGSI
    //** DAN DI NOMER 4 DAN 5 MEMLIKI FUNGSINYA SENDIRI-SENDIRI UNTUK MENGAKSES PROGRAM NOMER 4 NAMUN HANYA BERBEDA LOGIC SAJA
    //** WIS TAK JELASNO NDE BAGIAN "KESIMPULAN PENGGUNAAN FUNCTION ANTARA NOMER 4 DAN 5"
    
    // p10_tugas_pendahuluan_1();
    // p10_tugas_percobaan_1();
    // p10_tugas_percobaan_2();
    // p10_tugas_percobaan_3();
    // p10_tugas_percobaan_4();
}