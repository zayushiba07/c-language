
#include<stdio.h>

void printable(int start,int end)
{
    if(start<end)
    {
        printf(".........Asc order...........\n");
        while(start<=end)
        {
           for(int i=1;i<=10;i++)
           {
                int ans = start * i;
                printf("%d * %d = %d\n",start,i,ans);
           }
           printf("********************************\n");
           start++;
        }
        
    }
    else
    {
         printf(".........dec order...........\n");
        while(start>=end)
        {
           for(int i=1;i<=10;i++)
           {
                int ans = start * i;
                printf("%d * %d = %d\n",start,i,ans);
                
           }
           printf("*******************************\n");
           start--;
        }
    }
}

int main()
{
    int s1,e1;
    printf("Enter start os table :");
    scanf("%d",&s1);
    printf("Enter end os table :");
    scanf("%d",&e1);
    printable(s1,e1);
    printable(8,3);
    printable(2,5);

    return 0;
}