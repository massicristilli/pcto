#include <stdio.h>

double somma(double a, double b)
{
    return a + b;
}

double moltiplicazione(double a, double b)
{
    return a * b;
}

double divisione(double a, double b)
{
    return a / b;
}

double sottrazione(double a, double b)
{
    return a - b;
}

int main()
{
    double a;
    double b;
    printf("inserisci due numeri e ti daro somma, divisione, moltiplicazione, sottrazione\n");
    scanf("%lf %lf", &a, &b);
    double risultato = somma(a, b);
    double risultato2 = divisione(a, b);
    double risultato3 = moltiplicazione(a, b);
    double risultato4 = sottrazione(a, b);
    printf("somma= %lf\nsottrazione= %lf\ndivisone= %lf\nmoltiplicazione= %lf\n", risultato, risultato4, risultato2, risultato3);
}