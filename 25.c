#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        k = 0;
        for (j = i; j > 0; j--)
        {
            k++;
            if (k == 1)
            {
                continue;
            }
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
