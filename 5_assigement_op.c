#include<stdio.h>

int main()
{
    int no1;
    int no2;
    printf("enter number 1:");
    scanf("%d",&no1);
    printf("enter number 2: ");
    scanf("%d",&no2);
    no1+=no2;
   // no1 = no1 + no2;
    printf("+= :%d\n",no1);
    no1-=no2;
    // no1 = no1 - no2;
    printf("-= :%d\n",no1);
    no1*=no2;
    // no1 = no1 * no2;
    printf("*= :%d\n",no1);
    no1/=no2;
    // no1 = no1 / no2;
    printf("/= :%d\n",no1);
    no1%=no2;
    // no1 = no1 % no2;
    printf("%%= :%d\n",no1);
    return 0;
}