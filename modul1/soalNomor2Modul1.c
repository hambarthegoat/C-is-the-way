#include <stdio.h>

int main()
{
    int num, a, b, c, d;

    scanf("%d", &num);

    a = (num / 100);
    b = (num / 10 % 10);
    c = (num % 10);

    if (a > 0)
    {
        switch (a)
        {
        case 1:
            printf("seratus ");
            break;

        case 2:
            printf("dua ratus ");
            break;

        case 3:
            printf("tiga ratus ");
            break;

        case 4:
            printf("empat ratus ");
            break;

        case 5:
            printf("lima ratus ");
            break;

        case 6:
            printf("enam ratus ");
            break;

        case 7:
            printf("tujuh ratus ");
            break;

        case 8:
            printf("delapan ratus ");
            break;

        case 9:
            printf("sembilan ratus ");
            break;

        default:
            printf("");
        }
    }
    if (b == 1 && c > 0)
    {
        switch (b, c)
        {
        case 1:
            printf("sebelas ");
            break;

        case 2:
            printf("dua belas ");
            break;

        case 3:
            printf("tiga belas ");
            break;

        case 4:
            printf("empat belas ");
            break;

        case 5:
            printf("lima belas ");
            break;

        case 6:
            printf("enam belas ");
            break;

        case 7:
            printf("tujuh belas");
            break;

        case 8:
            printf("delapan belas ");
            break;

        case 9:
            printf("sembilan belas ");
            break;
        }
    }

    if (b == 1 && c == 0)
    {
        switch (b)
        {
        case 1:
            printf("sepuluh ");
            break;
        }
    }

    if (b >= 2)
    {
        switch (b)
        {

        case 2:
            printf("dua puluh ");
            break;

        case 3:
            printf("tiga puluh ");
            break;

        case 4:
            printf("empat puluh ");
            break;

        case 5:
            printf("lima puluh ");
            break;

        case 6:
            printf("enam puluh ");
            break;

        case 7:
            printf("tujuh puluh ");
            break;

        case 8:
            printf("delapan puluh ");
            break;

        case 9:
            printf("sembilan puluh ");
            break;
        }
    }
    if (a > 0 && b == 0 && c > 0 || a > 0 && b >= 2 && c > 0)
    {
        switch (c)
        {
        case 1:
            printf("satu");
            break;

        case 2:
            printf("dua ");
            break;

        case 3:
            printf("tiga ");
            break;

        case 4:
            printf("empat ");
            break;

        case 5:
            printf("lima");
            break;

        case 6:
            printf("enam ");
            break;

        case 7:
            printf("tujuh ");
            break;

        case 8:
            printf("delapan ");
            break;

        case 9:
            printf("sembilan ");
            break;
        }
    }
    if (b == 0 && a == 0 && c > 0)
    {
        switch (c)
        {
        case 1:
            printf("satu");
            break;

        case 2:
            printf("dua ");
            break;

        case 3:
            printf("tiga ");
            break;

        case 4:
            printf("empat ");
            break;

        case 5:
            printf("lima");
            break;

        case 6:
            printf("enam ");
            break;

        case 7:
            printf("tujuh ");
            break;

        case 8:
            printf("delapan ");
            break;

        case 9:
            printf("sembilan ");
            break;
        }
    }
    return 0;
}
