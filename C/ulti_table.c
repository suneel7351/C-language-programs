#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the value of a=");
    scanf("%d", &a);
    for (i = 10; i >= 1; i--)
    {
        printf("%d X %d=%d\n", a, i, a * i);
    }
    return 0;
}