#include <stdio.h>
int factorial(x)               //factorial
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r, nCr;
    printf("enter any value (n) : ");
    scanf("%d", &n);
    printf("enter any value (r) : ");
    scanf("%d", &r);
    nCr = factorial(n) / (factorial(r) * factorial(n - r));    //combination
    printf("nCr =%d", nCr);
    return 0;
}