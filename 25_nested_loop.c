
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

* * * * *
* * * *
* * *
* *
*

*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>

int main()
{
    int row,column;
    for(row=5;row>=1;row--)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d",column);
        }
        printf("\n");
    }
    return 0;
}