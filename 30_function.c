
#include<stdio.h>

int addition(int no1,int no2)
{
    int ans = no1 + no2;
    return ans;
    //return no1+no2;
}
int subtraction(int no1,int no2)
{
    int ans = no1 - no2;
    return ans;
    //return no1-no2;
}

int main()
{
    int num1, num2;
    
    printf("Enter no1: ");
    scanf("%d", &num1);
    
    printf("Enter no2: ");
    scanf("%d", &num2);

    int addResult = addition(num1, num2);
    int subResult = subtraction(num1, num2);

    printf("Addition result is: %d\n", addResult);
    printf("Subtraction result is: %d\n", subResult);

    // Also show fixed values (example)
    printf("Addition of 85 and 63 is: %d\n", addition(85, 63));
    printf("Subtraction of 85 and 63 is: %d\n", subtraction(85, 63));

    return 0;
}
