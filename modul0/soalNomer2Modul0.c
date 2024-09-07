#include <stdio.h>

int main () {
    // Inisialisasi
    int A, B, C, D, E;

    // Input pizza dan teman ghifari
    scanf("%d %d", &A, &B);

    // Penghitungan
    D = A / B;
    E = A % B;

    // Output
    printf("Teman-teman mendapatkan %d potong :)\n", D);
    printf("Ghifari teman mendapatkan %d potong :(", E);

    return 0;
}