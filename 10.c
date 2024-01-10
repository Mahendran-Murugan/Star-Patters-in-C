#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, jlim;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    jlim = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= jlim; j++)
        {
            printf("*");
        }
        printf("\n");
        jlim += 2;
    }
    return 0;
}
