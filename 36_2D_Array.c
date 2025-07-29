#include<stdio.h>

int main()
{
    char name[5][20],i;// first row is for loop like you can enter five name . second column is for length name 

    printf("5 name are printed here\n");
     printf("=================================\n");

    for(i=0;i<5;i++)
    {
        printf("Enter name [%d]:",i);
        scanf("%s",&name[i]);
    }

    printf("=================================\n");

    for(i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}