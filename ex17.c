#include <stdio.h>

int main ()
{
    printf("dammi un numero intero qualsiasi\n");
    int a;
    scanf("%d", &a);
    int n = a - 1;
    int b = 0;
    while(n>1)
    {
       if(a % n == 0)
       {
          b = b + 1;
       }
       n--;
    }
    if(b != 0)
    {
        printf("il tuo numero non é primo\n");
    }
    else if(b == 0)
    {
        printf("il tuo numero é primo\n");
    }
}