#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, n;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = n; j >= i; j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
