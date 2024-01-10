#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k, a = 65;
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
            printf("%c", 65);
        }
        for (k = 1; k <= i; k++)
        {
            if (i == 1)
                printf(" ");
            else
                printf("%c", a);
        }
        a++;
        printf("\n");
    }
    return 0;
}
