#include <stdio.h>

int main ()
{
    int a;
    printf("dammi il tuo anno di nascita\n");
    scanf("%d", &a);
    int b = 1969;
    int c = b - a;
    int d = a - b;
    if(a == b)
    {
        printf("sei nato lo stesso anno in cui l'uomo é andato sulla luna\n");
    }
    else if(a < b)
    {
        printf("sei nato %d anni prima di quando l'uomo é andato sulla luna\n", c);
    }
    else 
    {
        printf("sei nato %d anni dopo l'atterraggio dell'uomo sulla luna\n", d);
    }
}