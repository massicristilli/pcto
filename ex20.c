#include <stdio.h>

int main ()
{
    int a = 5;
    int numero;
    float prezzo;
    while(numero > 0)
    {
        printf("inserisci il numero di ordini che vuoi\n");
        scanf("%d", &numero);
        if(numero > 0)
        {
            if(numero < 30)
            {
                prezzo = numero * a;
                printf("il costo totale é %f$\n", prezzo);
            }
            else if(numero >= 30 && numero < 50)
            {
                prezzo = numero * a * 0.9;
                printf("il costo totale é %f$\n",  prezzo);
            }
            else if(numero >= 50)
            {
                prezzo = numero * a * 0.85;
                printf("il costo totale é %f$\n", prezzo);
            }
        }
        else
        {
            printf("errore");
        }


    }
    return 0;

}