#include <stdio.h>

int main ()
{
    int a;
    printf("ïnserisci la tua eta\n");
    scanf("%d", &a);
    if(a > 18)
    {
        printf("sei maggiorenne\n");
    }
    else if(a < 18)
    {
        printf("sei minorenne\n");
    }
    else
    {
        printf("gabriele federico gioia III\n");
    }
}