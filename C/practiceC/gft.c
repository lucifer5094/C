
#include <stdio.h>
int main()
{
   int temp;
   float n, x;
   char o;

   while (1)
   {
      printf("enter any no : ");
      temp = scanf("%f", &n);
      if (temp != 1)
      {
         printf("please enterr number!!");
         goto end;
      }
      else
      {

         printf("to convert\n");
         printf("enter a for centimeter to meter\n\n");
         printf("enter b for centimeter to millimeter\n\n");
         printf("enter c for meter to kilometer\n\n");
         printf("enter d for kilometer to miles\n\n");
         printf("enter e for kilogram to pounds\n\n");
         scanf(" %c", &o);

         switch (o)
         {
         case 'q':
            printf("quitting program...");
            goto end;
            break;

         case 'a':
            x = n / 100;
            break;
         case 'b':
            x = n * 10;
            break;
         case 'c':
            x = n / 1000;
            break;
         case 'd':
            x = n * 0.62137119;
            break;
         case 'e':
            x = n * 2.20462262;
            break;
         default:
            printf("invalid operator\n");
            printf("kindly enter valid operator\n");
         }
         printf("your answer = %f\n", x);
      }
   }
end:
   return 0;
}
