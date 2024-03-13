#include <stdio.h>

int main()
{
    int a[5];
    int posizione= 0;
    int numero_stampe = 0;
    int comparatore = 0;
    int indicatore = 1;

    printf("\ninserisci 5 numeri e li metteró in ordine di grandezza\n\n");
    printf("1) ");
    scanf("%d", &a[0]);
    printf("2) ");
    scanf("%d", &a[1]);
    printf("3) ");
    scanf("%d", &a[2]);
    printf("4) ");
    scanf("%d", &a[3]);
    printf("5) ");
    scanf("%d", &a[4]);
    printf("\nla sequenza in ordine é\n\n");

    while(numero_stampe <= 4)
    {
        while(posizione <= 4)
        {
            if(a[posizione] == comparatore)
            {
                printf("%d) ", indicatore);
                printf("%d\n", comparatore);
                numero_stampe++;
                posizione++;
                indicatore++;
            }
            else
            {
                posizione++;
            }
        
        }
        posizione = 0;
        comparatore++;
    }
}