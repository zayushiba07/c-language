#include<stdio.h>

int main()
{
    int days;
    printf("Enter seven days :");
    scanf("%d",&days);

    if(days==1)
    {
        printf("that is Sunday");
    }
    else if(days==2)
    {
        printf("that is Monday");
    }
    else if (days==3)
    {
        printf("that is Tuesday");
    }
    else if(days==4)
    {
        printf("that is Wednesday");
    }
    else if(days==5)
    {
        printf("that is Thursday");
    }
    else if(days==6)
    {
        printf("that is Friday");
    }
    else if(days==7)
    {
        printf("that is Saturday");
    }
    else
    {
        printf("Invalid Number try Again!!!!!!!!");
    }
    return 0;

    
}