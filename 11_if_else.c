#include<stdio.h>
int main()
{
    int month;
    printf("enter month :");
    scanf("%d",&month);
    if(month==2)//<,>,<=,>=,==,!=
    {
        printf("it is 28/29 days of months\n");
        return;
    }
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("it is 31 days of months\n");
    }
    else
    {
        printf("it is 30 days of months\n");
    }
    return 0;
}