#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, a;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = 65;
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
