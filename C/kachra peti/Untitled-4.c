#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("enter celcius value =");
    scanf("%d",&c);
    f=((9.0/5.0)*c)+32.0;
    printf("final value in f =%f",f);
    return 0;
}