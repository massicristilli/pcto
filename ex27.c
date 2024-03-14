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

double perimetro(double a, double b, double c)
{
    return a + b + c;
}



double area(double a, double b, double c)
{
    return (sqrt(((perimetro(a, b, c) / 2)) * ((perimetro(a, b, c) / 2) - a) * ((perimetro(a, b, c) / 2) - b) * ((perimetro(a, b, c) / 2) - c)));
}

int main()
{
    int a;
    int b;
    int c;
    printf("ciao utente dammi tre lati di un triangolo e io ti diro perimetro e area!\n");
    scanf("%d %d %d", &a, &b, &c);
    double roma = perimetro(a, b, c);
    double lazie = area(a, b, c);
    printf("perimetro = %lf\narea = %lf\n", roma, lazie);
    printf("grazie!");

}
