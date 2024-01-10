#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, jlim, jlim2, k, l = 1, m = 1;
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
                l++;
                printf("*");
            }
            for (j = 1; j <= jlim; j++)
            {
                printf(" ");
            }
            for (k = 1; k < l; k++)
            {
                printf("*");
            }
            jlim += 2;
            l = 1;
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                m++;
                printf("*");
            }
            for (j = jlim2; j >= i; j--)
            {
                printf(" ");
            }
            for (k = 1; k < m; k++)
            {
                printf("*");
            }
            jlim2--;
            m = 1;
        }
        printf("\n");
    }
    return 0;
}
