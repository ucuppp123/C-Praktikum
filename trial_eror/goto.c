#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("masukkan data 1 : "); //
    scanf("%d ", &x);
    printf("masukkan data 2 : "); //
    scanf("%d ~", &y);
    z = x * y;
    goto exit;
    printf("masukkan data 3 : "); //
    scanf("%d \n", &z);

    exit:
        printf("manual goto done"); //
}
