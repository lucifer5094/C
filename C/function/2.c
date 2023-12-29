#include <stdio.h>
void a()
{
    printf("hellloooo ");
    return;
}
void b()
{
    printf("baby\n");
    return;
}
int main()
{
    for (int i = 1; i < 10; i++)
    {
        a();
        b();
    }
    return 0;
}