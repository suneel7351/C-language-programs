#include <stdio.h>

int main()
{
    int a, i, factorial = 1;
    printf("Enter the value of a=");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d", a, factorial);

    return 0;
}