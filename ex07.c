#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf("ïnserisci due numeri\n");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("%d é maggiore di %d\n", a, b);
    }
    else
    {
        printf("%d é minore di %d\n", a, b);
    }
}