#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a=");
    scanf("%d", &a);
    printf("\nEnter the value of b=");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d", b);

    return 0;
}
// #include<stdio.h>
//  int main()
// {
// int a=10, b=20;
// printf("Before swap a=%d b=%d",a,b);
// a=a+b;//a=30 (10+20)
// b=a-b;//b=10 (30-20)
// a=a-b;//a=20 (30-10)
// printf("\nAfter swap a=%d b=%d",a,b);
// return 0;
// }