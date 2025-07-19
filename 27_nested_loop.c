/*
a
a b
a b c
a b  c d

*/

#include<stdio.h>

int main()
{
    char symbol;
    int no;
    printf("Enter symbol :");
    scanf("%c",&symbol);

    no=symbol;//copy symbol values in no variable

    no = no-97;//symbol = a 97-97 0loop execute print "a"

    for(int row=0;row<=no;row++)
    {
        for(int column=97;column<=97+row;column++)
        {
            printf("%c",column);// a a b
        }
        printf("\n");
    }

    return 0;
}