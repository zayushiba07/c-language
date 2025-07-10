//100 90 80 70 ..... 0

#include<stdio.h>

int main()
{
    int number=100;
    while(number>=0)
    {
        printf("%3d",number);
        number--;
    }
    return 0;
}