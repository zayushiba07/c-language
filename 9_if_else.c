#include<stdio.h>

int main()
{
    int time,hour;
    printf("Enter formate of 24 hours clock :");
    scanf("%d",&time);
    if(time>12)
    {
        hour = time - 12;
        printf("%d pm \n",hour);
    }
    else
    {
        printf("%d am \n",time);
    }
    return 0;
}