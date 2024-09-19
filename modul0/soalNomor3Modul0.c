#include <stdio.h>

int main()
{

    // Inisialisasi
    int A, B, C;
    double D, E;

    // Input
    scanf("%d %d %d", &A, &B, &C);

    // Operasi artimatika
    D = A + B;
    E = D / C;

    // Output
    printf("%.2f", E);

    return 0;
}