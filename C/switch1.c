#include <stdio.h>

int main()
{
    int i;
    float a, b, c, d, e, f;
    printf("Enter the value of a=");
    scanf("%f", &a);
    printf("Enter the value of b=");
    scanf("%f", &b);
    printf("Enter the value of i=");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        c = a + b;
        printf("The value of a+b=%f", c);
        break;
    case 2:
        d = a - b;
        printf("The value of a-b=%f", d);
        break;
    case 3:
        e = a * b;
        printf("The value of a*b=%f", e);
        break;
    case 4:
        f = a / b;
        printf("The value of a/b=%f", f);
        break;
    default:
        printf("you choose wrong choice");
    }
    return 0;
}