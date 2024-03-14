#include <stdio.h>

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

int main()
{
    double a;
    printf("inserisci un numero e faccio la radice quadrata\n");
    scanf("%lf", &a);
    printf("la radice quadrata é %.1f\n", sqrt(a));
}