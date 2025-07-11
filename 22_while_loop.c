#include<stdio.h>
//5x4x3x2x1 = 120
int main()
{
    int num,fact=1;
    printf("Enter the number for factorial :");
    scanf("%d",&num);
    while(num>1)
    {
        fact*=num;
        printf("%5d",fact);
        num--;//120
    }
     
    return 0;
}