#include <studio.h>

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

    while(fabs(guess * guess - x) >= epsilon)
    {
        guess = (guess + x / guess) /. 2.0;
    }
    return guess;
}