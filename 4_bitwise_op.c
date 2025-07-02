#include<stdio.h>

int main()
{
    int no1;
    int no2;
    printf("enter number 1:");
    scanf("%d",&no1);
    printf("enter number 2: ");
    scanf("%d",&no2);
    printf("& bitwise :%d\n",no1 & no2);
    printf("| bitwise :%d\n",no1 | no2);
    printf("^ bitwise :%d\n",no1 ^ no2);
    printf("~ bitwise :%d\n",~no2);
    printf("<< bitwise :%d\n",no1<<2);
    printf(">> bitwise :%d\n",no2>>2);
    return 0;
}