#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, jlim, jlim2;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    jlim = 1;
    jlim2 = n + 3;
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (j = n; j >= i; j--)
            {
                printf(" ");
            }
            for (j = 1; j <= jlim; j++)
            {
                printf("*");
            }
            jlim += 2;
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (j = jlim2; j >= i; j--)
            {
                printf("*");
            }
            jlim2--;
        }
        printf("\n");
    }
    return 0;
}
