#include <stdio.h>
int factorial(x) // factorial
{
    int fact = 1;
    for (int k = 1; k <= x; k++)
    {
        fact = fact * k;
    }
    return fact;
}
int nCr(int n, int r)
{
    int nCr;
    nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}
int main()
{
    int a, max, min;
    printf("enter any value : ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i > j)
            {
                max = i;
                min = j;
            }
            else
            {
                max = j;
                min = i;
            }
            printf(" %d", nCr(max, min));

            /**if (i > j)
            {
                printf(" %d", nCr(i, j));
            }
            if (j > i)
            {
                printf(" %d", nCr(j, i));
            }**/
        }
        printf("\n");
    }
    return 0;
}