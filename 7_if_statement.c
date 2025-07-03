/*
 get input and covert into cube,but the number is negative then that covert to positive.
 1.get input from user
 2.use if condition to check number is nagative or positive .
 3. number is nagative then that covert to positive.
 4. number is convert into cube
 5.print message of answer 
*/
#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number<0)//>,<,>=,<=,==,!=
    {
        number = 0 - number;
        printf("nagative number is convert into positive : %d\n",number);
    }
    int cube = number * number *number;
    printf("Cube is : %d\n",cube);
    return 0;
}