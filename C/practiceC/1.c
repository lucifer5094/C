#include <stdio.h>
int main()
{
    int a, b;
    printf("enter any no = ");
    scanf("%d", &a);
    /*table*/
    for (int i = 1; i <= 10; i++)
    {
        b = a * i;
        printf("%d * %d =%d\n", a, i, b);
    }
    return 0;
} //