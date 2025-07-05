#include<stdio.h>

int main()
{
    int cost_price,sale_price;
    printf("Enter the sale price of product :");
    scanf("%d",&sale_price);
    printf("Enter the cost price of product :");
    scanf("%d",&cost_price);
    int differnce = sale_price - cost_price;
    if(differnce<0)
    {
        printf("loss :%d\n",differnce);
    }
    else
    {
        printf("profit is :%d\n",differnce);
    }
    printf("product purch successfully");
    return 0;
}