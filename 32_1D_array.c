#include<stdio.h>

int main()
{
    int choice;
    printf("Enter choice of subject :");
    scanf("%d",&choice);
    int sub[choice];

    for(int i=1;i<=choice;i++)
    {
        printf("Enter subject marks :");
        scanf("%d",&sub[i]);   
    }

    for(int i=1;i<=choice;i++)
    {
        printf("%d\t",sub[i]);
    }

    return 0;
    
}