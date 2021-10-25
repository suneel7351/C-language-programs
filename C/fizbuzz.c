#include <stdio.h>

int main()
{
    int n = 100, i;
    for (i = 1; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 15 != 0))
        {
            printf("FIZZ\t");
        }
        else if ((i % 5 == 0) && (i % 15 != 0))
        {
            printf("BUZZ\t");
        }
        else if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FIZZBUZZ\t");
        }
        else
        {
            printf("%d\t", i);
        }
    }

    return 0;
}