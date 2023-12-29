// this code is for print pyramid
#include <stdio.h>
int main()
{
    // taking input by user
    int n, x;
    printf("enter no of lines : ");
    scanf("%d", &n);
    int min = 0; // defined any random no to print
    // started nested loop according to requirements
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {

            int a = i; // when output is n
            if (i > n) // when output is going greater than n
                a = 2 * n - i;
            int b = j; // when output is n
            if (j > n) // when output is going greater than n
                b = 2 * n - j;
            if (a < b) // minimizing
                min = a;
            else
                min = b;
            x = n - min + 1; // final output
            printf(" %d ", x);
        }
        printf("\n\n");
    }

    return 0;
}