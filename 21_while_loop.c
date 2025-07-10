#include<stdio.h>

int main()
{
    int number,start=1,cube;
    printf("Enter the number for cube sequence :");
    scanf("%d",&number);
    while(start<=number)
    {
        cube = start*start*start;
        printf("%5d",cube);
        start++;
    }
    return 0;
}