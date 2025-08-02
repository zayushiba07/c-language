
#include<stdio.h>

int main()
{
    int no=5;
    int *ptr = &no;
    ptr = &no;

    printf("value of no is :%d\n",no);
    printf("value of *ptr is :%d\n",*ptr);
    printf("address of ptr is :%d\n",ptr);
    printf("address of a is :%d\n",&no);
    return 0;
}