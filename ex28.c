#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("inserisci le coordinate di un punto sul piano cartesiano\n");
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    if(x > 0 && y > 0)
    {
        printf("il tuo punto é nel primo quadrante\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("il tuo punto é nel secondo quadrante\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("il tuo punto é nel terzo quadrante\n");
    }
    else if((x = 0) && (y != 0))
    {
        printf("il tuo punto e'sull'asse delle x\n");
    }
    else if((x != 0) && (y = 0))
    {
        printf("il tuo punto e'sull'asse delle y\n");
    }
    else
    {
        printf("il tuo punto e' sul quarto quadrante\n");
    }

}