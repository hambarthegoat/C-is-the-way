#include <stdio.h>

int main()
{
    // Inisialisasi
    int A, B, C, D, E, total;
    double sum;

    // Input nilai
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    // Operasi aritmatika
    total = A + B + C + D;
    sum = total / 4;

    // Hasil
    printf("%d %.1f", total, sum);
    return 0;
}