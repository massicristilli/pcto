#include <stdio.h>

int main ()
{
    int numeri;
    int somma;
    int divisori;
    float media;

    numeri = 0;
    somma = 0;
    divisori = 0;
    media = 0;
    while(numeri >= 0)
    {
        printf("inserisci un numero\n");
        scanf("%d", &numeri);
        somma = numeri + somma;
        divisori++;
        media = (float)somma / divisori;
        if(numeri >= 0)
        {
            printf("%f\n", media);
        }

    }
    return 0;

}