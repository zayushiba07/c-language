#include<stdio.h>

int main()
{
    int row,column;
    for(row=1;row<=5;row++)
    {
        for(column=1;column<=row;column++)
        {
             printf("| ");
        }
        printf("\n");
        
    }
    return 0;
}


/*
 1 2 3 4 5
1* 
2* *
3* * *
4* * * *
5* * * * *


*/
