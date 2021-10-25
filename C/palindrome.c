#include <stdio.h>

int main()
{
    int i, r = 1, n, sum = 0, temp;
    printf("Enter the value of n=");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
        i++;
    }
    if (temp == sum)
    {
        printf("%d is a palindrome", temp);
    }
    else
    {
        printf("%d isn't a palindrome", temp);
    }

    return 0;
}