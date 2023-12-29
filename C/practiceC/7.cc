#include <stdio.h>
int main()
{
    int n, result;
    printf("enter any no : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result = 9 * i - 5 * i;
        printf("9 * %d - 5 * %d = %d  but I love kashish", i, i, result);
        printf("\n");
    }
    return 0;
}