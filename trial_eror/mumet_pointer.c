#include <stdio.h>

int main() {
    int i1 = 5;
    int *p1 = &i1;
    int i2 = *p1;

    printf("Nilai i1: %d\n", i1);
    printf("Alamat memori i1: %p\n", (void*)&i1);
    printf("Nilai i2: %d\n", i2);
    printf("Alamat memori i2: %p\n", (void*)&i2);

    return 0;
}
