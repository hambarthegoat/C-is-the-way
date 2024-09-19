#include <stdio.h>

int main()
{

    int num, l1, l2, l3, l4, sum;

    scanf("%d", &num);

    l1 = num / 1000;
    l2 = num / 100 % 10;
    l3 = num / 10 % 10;
    l4 = num % 10;

    if (l4 == 1){
        l4 = 1;
    } else {
        l4 = 0;
    }
    if (l3 == 1){
        l3 = 2;
    } else {
        l3 = 0;
    }
    if (l2 == 1){
        l2 = 4;
    } else {
        l2 = 0;
    }
    if (l1 == 1){
        l1 = 8;
    } else {
        l1 = 0;
    }

    sum = l1 + l2 + l3 + l4;

    if(sum == 1){
        printf("1000000");
    } else if(sum == 2){
        printf("1100000");
    } else if(sum == 3){
        printf("1110000");
    } else if (sum == 4){
        printf("1111000");
    } else if(sum == 5){
        printf("1111100");
    } else if(sum == 6){
        printf("1111110");
    } else if(sum == 7){
        printf("1111111");
    } else {
        printf("0000000");
    }

    // switch (sum){
    //     case 1 :
    //     printf("|\n|");
    //     break;

    //     case 2 :
    //     printf(" _ \n _|\n|_");
    //     break;

    //     case 3 :
    //     printf(" _ \n _|\n _|");
    //     break;

    //     case 4 :
    //     printf("   \n|_|\n  |");
    //     break;

    //     case 5 :
    //     printf(" _ \n|_ \n _|");
    //     break;

    //     case 6 :
    //     printf(" _ \n|_ \n|_|");
    //     break;

    //     case 7 :
    //     printf(" _ \n  |\n  |");
    //     break;

    //     case 8 :
    //     printf(" _ \n|_|\n|_|");
    //     break;

    //     case 9 :
    //     printf(" _ \n|_|\n _|");
    //     break;

    //     default : 
    //     return 0;
    // }

}