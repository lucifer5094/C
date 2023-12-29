
   //swapping two numbers using pointers
#include<stdio.h>
void swap(int* x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int b;
    printf("enter b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    return 0;
}