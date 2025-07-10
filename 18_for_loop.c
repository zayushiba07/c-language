#include<stdio.h>

int main()
{
    int number,multi,result;
    printf("Enter the Number for multiplation :");
    scanf("%d",&number);
    for(multi=1;multi<=10;multi++)
    {
        result = number * multi;
        printf("%2d*%2d=%3d\n",number,multi,result);
    }
    return 0;
}