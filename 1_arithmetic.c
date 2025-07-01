#include<stdio.h>

int main()
{
    int no1;
    int no2;
    printf("enter number 1:");
    scanf("%d",&no1);
    printf("enter number 2: ");
    scanf("%d",&no2);
    printf("Addition is :%d\n",no1+no2);
    printf("Sub : %d\n",no1-no2);
    printf("Mul : %d\n",no1*no2);
    printf("div : %d\n",no1/no2);
    printf("mod : %d\n",no1%no2);
    printf("Inc : %d\n",no1++);
    printf("Inc1 : %d\n",no1++);
    printf("Dec : %d\n",no2--);
    return 0;
}