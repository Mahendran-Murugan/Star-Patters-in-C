#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, a = 65;
    printf("Enter the Value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
