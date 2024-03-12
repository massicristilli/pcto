#include <stdio.h>

int main ()
{
   int a;
   int b;
   printf("ïnserisci due numeri\n");
   scanf("%d %d", &a, &b);
   if(a % b == 0)
   {
      printf("%d é multiplo di %d\n", a, b);
   }
   else
   {
      printf("%d non é multiplo di %d", a, b);
   }
}