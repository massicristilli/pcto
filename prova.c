#include <stdio.h>



double perimetro(double a, double b, double c)
{
    return a + b + c;
}

double sqrt(double x)
{
    double a = 0.00001;
    if(x <0)
    {
        printf("errore\n");
    }
    else if(x == 0 || x == 1)
    {
        return x;
    }
    else if(x > 0)
    {
        while(x >= a * a)
        {
            a+= 0.00001;
        }
        return a;
    }  
    

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
