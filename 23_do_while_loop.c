#include<stdio.h>

int main()
{
    int base,exponet=1,i;
    printf("Enter Base :");
    scanf("%d",&base);
    printf("Enter Exponet :");
    scanf("%d",&exponet);

    do{
        exponet*=base; 
        i++;
       
    }while(i<exponet);
     printf("%5d\n",i);
     printf("%5d",exponet);
    return 0;
}