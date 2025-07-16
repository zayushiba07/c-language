/*
  1 2 3 4 5
 1       *
 2      **
 3     ***
 4    ****
 5   *****

 *
 * *
 * * *
 * * * *
 * * * * *
*/

#include<stdio.h>

int main()
{
    int row,star,space;
    for(row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");
        }
        for(star=1;star<=row;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}