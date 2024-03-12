#include <stdio.h>

int main ()
{
    float a;
    float b = 273.15;
    float c = 1.8;
    int d = 32;
    printf("ïnserisci una temperatura in celsius\n");
    scanf("%f", &a);
    float e = a + 273.15;
    if(e < 0)
    {
        printf("errore\n");
    }
    else
    {
        printf("la tua temperatura in fahrenheit é %f\n", a * c + d);
        printf("la tua temperatura in kelvin %f\n", e);
    }

}