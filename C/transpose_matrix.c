#include <stdio.h>
int main()
{
    int i, j, a[3][3], a_t[3][3];

    printf("Enter elements of the matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a_t[j][i] = a[i][j];
        }
    }
    printf("Transpose of the a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a_t[i][j]);
            printf("\n");
        }
    }
    return 0;
}