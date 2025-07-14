#include <stdio.h>

int main()
{
    int base, exponent, result = 1, i = 0;

    printf("Enter Base : ");
    scanf("%d", &base);

    printf("Enter Exponent : ");
    scanf("%d", &exponent);

    printf("\nLoop trace:\n");

    do {
        result *= base;
        i++;
        printf("Iteration %d: result = %d\n", i, result);
    } while(i < exponent);

    printf("\nFinal Result: %d\n", result);
    printf("Total Loop Executions: %d\n", i);

    return 0;
}
