#include <stdio.h>

int main ()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   int f;
   float g;
   int h = 6;
   printf("ïnserisci l'eta delle persone sedute in questa fila\n");
   scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
   printf("la somma di tutte le eta é %d\n", a + b + c + d + e + f);
   g = a + b + c + d + e + f;
   printf("la media é %f\n", g / h);
}