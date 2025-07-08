#include<stdio.h>

int main()
{
    int first,last,number;
    printf("Enter two number(10-99) only :");
    scanf("%d",&number);

    first = number % 10;
    last = number / 10;     // 1    2     2    5      6      4

    switch (first)
    {
           case 0:
                printf("zero");
                 break;
            case 1:
                printf("one");
                 break;
            case 2:
                printf("two");
                 break;
            case 3:
                printf("three");
                 break;
            case 4:
                printf("four");
                 break;
            case 5:
                printf("five");
                 break;
            case 6:
                printf("six");
                 break;
            case 7:
                printf("seven");
                 break;
            case 8:
                printf("eight");
                 break;
            case 9:
                printf("nine");
                 break;
    }
    printf(" ");
    switch (last)
    {
         case 0:
                printf("zero");
                 break;
         case 1:
                printf("one");
                 break;
            case 2:
                printf("two");
                 break;
            case 3:
                printf("three");
                 break;
            case 4:
                printf("four");
                 break;
            case 5:
                printf("five");
                 break;
            case 6:
                printf("six");
                 break;
            case 7:
                printf("seven");
                 break;
            case 8:
                printf("eight");
                 break;
            case 9:
                printf("nine");
                 break;
    }
    return 0;
}
