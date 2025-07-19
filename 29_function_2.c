
#include<stdio.h>

void even_odd(int no)
{
    if(no%2==0)
    {
        printf("this number is even number \n");
    }
    else
    {
        printf("this number is odd number \n");
    }
}

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d",&number);

    even_odd(number);
    even_odd(10);
    even_odd(7);
    even_odd(589);
    even_odd(123);
    even_odd(1);
    return 0;
}