#include <stdio.h>

void p2_tugas_pendahuluan_soal_nomer_1()
{
    int input_nilai;
    printf("Masukkan nilai ujian : ");
    scanf("%d", &input_nilai);
    if (input_nilai <= 70)
    {
        printf("Anda tidak lulus\n");
    }
    else
    {
        printf("Anda Lulus\n");
    }
}

void p2_tugas_pendahuluan_soal_nomer_2()
{
    int input_nomer_hari;
    printf("Hari ke : ");
    scanf("%d", &input_nomer_hari);
    if (input_nomer_hari == 1)
    {
        printf("Minggu\n");
    }

    else if (input_nomer_hari == 2)
    {
        printf("Senin\n");
    }
    else if (input_nomer_hari == 3)
    {
        printf("Selasa\n");
    }

    else if (input_nomer_hari == 4)
    {
        printf("Rabu\n");
    }

    else if (input_nomer_hari == 5)
    {
        printf("Kamis\n");
    }

    else if (input_nomer_hari == 6)
    {
        printf("Jum'at\n");
    }
    else if (input_nomer_hari == 7)
    {
        printf("Sabtu\n");
    }
}

void p2_Percobaan_soal_nomer_1()
{
    int input_suhu;
    printf("Masukkan suhu dalam celcius : ");
    scanf("%d", &input_suhu);
    if (input_suhu > 30)
    {
        printf("Suhu sangat panas\n");
    }
    if (input_suhu < 0)
    {
        printf("Suhu sangat dingin\n");
    }
    else
    {
        printf("Suhu sangat sejuk\n");
    }
}

void p2_Percobaan_soal_nomer_2()
{
    char input_char;
    printf("Masukkan nilai huruf : ");
    scanf("%c", &input_char);
    switch (input_char)
    {
    case 'A':
        printf("Nilai angka 4\n");
        break;
    case 'B':
        printf("Nilai angka 3\n");
        break;
    case 'C':
        printf("Nilai angka 2\n");
        break;
    case 'D':
        printf("Nilai angka 1\n");
        break;
    case 'E':
        printf("Nilai angka O\n");
        break;
    }
}

void p2_Percobaan_soal_nomer_3()
{
    int a, b, c, result;
    printf("Masukkan 3 angka:");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        if (a < c)
        {
            result = a;
        }
        else
            result = c;
    }
    else if (b < c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    printf("Angka yang terkecil adalah : %d", result);
}

void p2_Percobaan_soal_nomer_4()
{
    int x, pemakaian_KwH, kelebihan_KwH;
    int final_biaya_range_100_sampai_500;
    int final_biaya_diatas_500_KwH;
    printf("Masukkan pemakaian rekening: ");
    scanf("%d", &pemakaian_KwH);
    if (pemakaian_KwH <= 100)
    {
        printf("Biaya pemakaian 100000\n");
    }
    if (100 < pemakaian_KwH <= 500)
    {
        kelebihan_KwH = pemakaian_KwH - 100;
        x = kelebihan_KwH * 1500;
        final_biaya_range_100_sampai_500 = x + 100000;
        printf("Biaya pemakaian %d\n", final_biaya_range_100_sampai_500);
    }
    if (pemakaian_KwH >= 500)
    {
        kelebihan_KwH = pemakaian_KwH - 500;
        x = kelebihan_KwH * 2000;
        final_biaya_diatas_500_KwH = x + 700000;
        printf("Biaya pemakaian %d\n", final_biaya_diatas_500_KwH);
    }
}

int main(int argc, char const *argv[])
{
    p2_tugas_pendahuluan_soal_nomer_2();
    p2_tugas_pendahuluan_soal_nomer_1();
    p2_Percobaan_soal_nomer_1();
    p2_Percobaan_soal_nomer_2();
    p2_Percobaan_soal_nomer_3();
    p2_Percobaan_soal_nomer_4();
}
