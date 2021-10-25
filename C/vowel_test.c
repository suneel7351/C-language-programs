#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is vowel", ch);
        }
        else
        {
            printf("%c is consonant", ch);
        }
    }
    else
    {
        printf("Neither vowel nor consonant");
    }

    return 0;
}