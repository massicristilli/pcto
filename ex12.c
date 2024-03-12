#include <stdio.h>

int main ()
{
    float a;
    float b;
    float c;
    printf("dammi tre numeri\n");
    scanf("%f %f %f", &a, &b, &c);
    if(b - a == c - b)
    {
        printf("ï tre numeri sono in successione\n");
    }
    else
    {
        printf("la tua non é una successione\n");
    }
}