#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, jlim, n;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    jlim = n + 3;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = jlim; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        jlim--;
    }
    return 0;
}
