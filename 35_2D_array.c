#include<stdio.h>

int main()
{
    int row=2,column=2,i,j;
    int number[row][column];

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter number [%d][%d]:",i,j);
            scanf("%d",&number[i][j]);
        }
    }

    printf("-------------------------------------\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\n",number[i][j]);
        }
    }
    return 0;
}