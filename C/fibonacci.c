#include <stdio.h>

int main()
{
    int n = 11, i, t1 = 0, t2 = 1, t_next;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", t1);
        t_next = t1 + t2;
        t1 = t2;
        t2 = t_next;
    }

    return 0;
}
