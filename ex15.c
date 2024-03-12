#include <stdio.h>

int main ()
{
   float a;
   float b;
   float c;
   printf("inserisci tre numeri e ti diro se possono essere lunghezze di un triangolo\n");
   scanf("%f %f %f", &a, &b, &c);
   if(a + b > c && b + c > a && a + c > b)
   {
        printf("ïl tuo é un triangolo\n");
        if((a == b) && (a == c))
        {
            printf("il triangolo é equilatero\n");
        }
        else if((a == b) || (b == c) || (c == a))
        {
            printf("il triangolo é isoscele\n");
        }
        else
        {
            printf("il tirangolo é scaleno\n");
        }
   }
   else
   {
     printf("il tuo non é un tirangolo\n");
   } 
   
}