#include <stdio.h>

int main()
{
    int num[10], i, j, s, f = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %d element of array=\n", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Enter the number for search=");
    scanf("%d", &s);
    for (j = 0; j < 10; j++)
    {
        if (num[i] == s)
        {
            printf("The is situated at %dth position", i + 1);
        }
        f = 1;
    }
    if (f == 0)
    {
        printf("Element not founded");
    }

    return 0;
}