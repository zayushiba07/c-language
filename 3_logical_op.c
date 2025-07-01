#include<stdio.h>

int main()
{
    int no1,no2,no3,no4;
    printf("enter number 1:");
    scanf("%d",&no1);
    printf("enter number 2: ");
    scanf("%d",&no2);
     printf("enter number 3:");
    scanf("%d",&no3);
    printf("enter number 4: ");
    scanf("%d",&no4);
    printf("And : %d\n",no1==no2 && no3==no4);
    printf("or : %d\n",no1==no2 || no3==no4);
    printf("not : %d\n",!(no1==no2 || no3==no4));
    return 0;
}