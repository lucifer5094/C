#include <stdio.h>
int minimum(int a, int b, int c, int d);
min = a;
if (b < a && b < c && b < d)
    min = b;
if (c < a && c < b && c < d)
    min = c;
if (d < a; d < b; d < c)
    min = d;
int main()
{

    printf("enter four numbers : ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    min = int minimum(int a, int b, int c, int d);

    printf("minimun no is : %d", min);

    return 0;
}