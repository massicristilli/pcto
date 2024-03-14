#include <stdio.h>


double modulo(double x)
{
    if(x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

double sqrt(double x)
{
    double guess = 1.0;
    double epsilon = 0.000000001;

    while(modulo(guess * guess - x) >= epsilon)
    {
        guess = (guess + x / guess) / 2.0;
    }
    return guess;
}



int main ()
{
     int a;
     int b;
     int c;
     float x1;
     float x2;
     printf("dammi i valori dei coefficenti a, b, c, di un equazione di secondo grado\n\n");
     scanf("%d %d %d", &a, &b, &c);
     double delta = (b * b) - 4*(a * c);
     if(delta > 0)
     {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("i risultati sono\nx1 = %lf\nx2 = %lf\n", x1, x2);
     }
     else if(delta == 0)
     {
        x2 = -b / (2 * a);
        x1 = x2;
        printf("i risultati dell'equazione coincidono e sono %lf", x1);
     }
     else if(delta < 0)
     {
        printf("L'equazione non ammette soluzioni reali\n");
     }

}

