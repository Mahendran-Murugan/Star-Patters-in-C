#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, count;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    count = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = n; j >= i; j--)
        {
            printf("%d", count);
        }
        printf("\n");
        count--;
    }
    return 0;
}
