#include <stdio.h>
#include <stdlib.h>
//! Coba-coba P6
// void fung_1(void)
// {
//     int i = 11;
//     printf("Nilai i dalam fung_1() = %d\n", i);
// }
// main()
// {
//     int i = 20;
//     fung_1();
//     printf("Nilai i dalam main     = %d\n", i);
//}

//! testing
// int i = 273 ;

// void tambah(void){
//     i++;
// }

// main(){
//     printf("Nilai awal i = %d\n", i);
//     i += 7;
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
// }

//! exdtern variable lokal

// int i = 273 ;

// void tambah(void){
//     extern int i;
//     i++;
// }

// main(){
//     printf("Nilai awal i = %d\n", i);
//     i += 7;
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
// }

//! extern variable diluar lokal

// int i = 273 ;

// void tambah(void){
//     i++;
// }

// main(){
//     extern int i;
//     printf("Nilai awal i = %d\n", i);
//     i += 7;
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
//     tambah();
//     printf("Nilai i kini = %d\n", i);
// }

//! static variable
// void fung_y(void);
// main()
// {
//     int y = 20;
//     fung_y();
//     fung_y();
//     printf("Nilai y dalam main() = %d\n", y);
// }
// void fung_y(void)
// {
//     static int y;
//     y++;
//     printf("Nilai y dalam fung_y() = %d\n", y);
// }

//! manuver fungsi
// void fung_1(void){}
// void fung_2(void){}
// void fung_1(void)
// {
//     puts("fungsi satu dijalankan");
//     fung_2();
// }

// void fung_2(void)
// {
//     puts("fungsi dua dijalankan");
// }

// main()
// {
//     fung_1();
// }

// Soal Nomer 1 A
// int OddEvenTest(int);
// main()
// {
//     int a, hasil;
//     a = 5;
//     hasil = OddEvenTest(a);
//     printf("a=%d; hasil=%d\n", a, hasil);
// }
// int OddEvenTest(int b)
// {
//     int a;
//     a = b % 2;
//     return a; // balikkan nilai a ke main
// }

// SoaL Nomer 1 B
// void demo(void);
// main()
// {
//     int i = 0;
//     while (i < 3)
//     {
//         demo();
//         i++;
//     }
// }
// void demo(void)
// {
//     auto int var_auto = 0;
//     static int var_static = 0;
//     printf("auto = %d, static = %d\n",
//            var_auto, var_static);
//     var_auto++;
//     var_static++;
// }

// SoaL Nomer 1 C
// void fung_a(void);
// void fung_b(void);
// int x = 20;
// main()
// {
//     x += 2;
//     printf("\nNilai x dalam main() = %d\n\n", x);
//     fung_a();
//     fung_a();
// }
// void fung_a(void)
// {
//     static x = 5;
//     x++;
//     printf("Nilai x dalam fung_a() = %d\n", x);
//     fung_b();
// }
// void fung_b(void)
// {
//     int x = 8;
//     x--;
//     printf("Nilai x dalam fung_b() = %d\n", x);
// }

// SoaL Nomer 2
// extern int feet;
// extern int feet_to_inchi;
// extern int inchi_to_cm;
// extern int cm_to_m;
int feet;
int feet_to_inchi;
int inchi_to_cm;
float cm_to_m;

void f_to_i()
{
    printf("Masukkan jumlah feet : ");
    scanf("%d", &feet);
    feet_to_inchi = feet * 12;
    printf("%d feet : %i inchi\n", feet, feet_to_inchi);
    i_to_cm();
    c_to_m();
}
void i_to_cm()
{
    inchi_to_cm = feet_to_inchi * 2.54;
    printf("%d inchi : %i cm\n", feet_to_inchi, inchi_to_cm);
}
void c_to_m()
{
    cm_to_m = inchi_to_cm * 0.01;
    printf("%d cm : %.2f m\n", inchi_to_cm, cm_to_m);
}

main()
{
    f_to_i();
}

//? TESTING DC
// int i;

// void sub_globe(void);
// int sub_add(void);
// void sub_minus(int a, int v, float c);

// main()
// {
//     extern int i;
//     void sub_globe(void);
//     {
//         printf("nilai i : %d\n", i);
//     }
//     i++;
//     printf("nilai i : %d", i);
// }