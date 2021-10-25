#include <stdio.h>

int main()
{
    float book_sp, book_cp, profit, loss;
    printf("Enter the selling price of book\n");
    scanf("%f", &book_sp);
    printf("Enter the cost price of book\n");
    scanf("%f", &book_cp);
    if (book_sp > book_cp)
    {
        profit = book_sp - book_cp;
        printf("Profit is %f", profit);
    }
    else if (book_sp < book_cp)
    {
        loss = book_cp - book_sp;
        printf("loss is %f", loss);
    }
    else
    {
        printf("No profit no loss");
    }

    return 0;
}