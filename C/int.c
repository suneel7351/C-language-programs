#include <stdio.h>

int main()
{
    float a = 125.50;
    int b = 125.50;
    char c = 'A';
    int j;

    printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(125.50));
    printf("%d %d \n", sizeof(c), sizeof(65));

    return 0;
}