#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 6; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d", i);
    }

    return 0;
}