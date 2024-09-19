#include <stdio.h>

int main()
{

    int num, j, k, l, J, K, L, sum;

    scanf("%d", &num);

    j = num / 100;
    k = num % 100 / 10;
    l = num % 10;

    J = j * j * j;
    K = k * k * k;
    L = l * l * l;

    sum = J + K + L;

    if (num <= 9)
    {
        int sum9;
        sum9 = l * 1;
        if (num == sum9)
        {
            printf("Merupakan Bilangan Armstrong");
        }
    }
    else if (num > 9 && num <= 99)
    {
        int sum99;
        sum99 = K + L;
        if (num == sum99)
        {
            printf("Merupakan Bilangan Armstrong");
        }
    }
    else if (num > 99 && num <= 999)
    {
        printf("Merupakan Bilangan Armstrong");
    }
    else
    {
        printf("Bukan Merupakan Bilangan Armstrong");
    }

    return 0;
}