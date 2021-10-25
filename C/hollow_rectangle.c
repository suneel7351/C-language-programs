#include <stdio.h>

int main()
{
    int i, j, n, m;
    printf("Enter the value of n=");
    scanf("%d", &n);
    printf("Enter the value of m=");
    scanf("%d", &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
