#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (i == 4)
        {
            break;
        }
    }
        printf("%d", i);

    return 0;
}