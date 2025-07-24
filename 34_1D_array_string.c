#include<stdio.h>

int main()
{
    char str[30];
    int n,i;

    printf("Enter your name :");
    for(i=0;i<=30;i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='\n')
        {
            break;
        }
    }

    for(i=0;i<50;i++)
    {
        printf("%c",str[i]);
        if(str[i]=='\n')
        {
            n=i;
            break;
        }
    }

    for(i=n-1;i>=0;i--)
    {
        printf("\nReverse order[%d] : %c",i,str[i]);
    }
    printf("\ncout string :%d",n);
    return 0;
}