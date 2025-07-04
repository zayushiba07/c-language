#include<stdio.h>

int main()
{
    int number,rem;
    printf("Enter the number :");
    scanf("%d",&number);
    rem = number % 2;
    printf("Reminder is :%d\n",rem);
    if(rem==1 || rem==-1)
    {
        printf("number is odd %d\n",number);
    }
    if(rem == 0)
    {
        printf("number is even :%d\n",number);
    } 
    printf("program execute sucessfully..");
    return 0;
}

