#include <stdio.h>

int ack(int m,int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (m != 0 && n == 0)
    {
        return ack(m - 1, 1);
    }
    else if (m && n != 0)
    {
        return ack(m - 1, ack(m, n - 1));
    }
}
int main()
{
    int a = 1;
    int b =1;

    printf("%d",ack(a,b));

    return 0;
}