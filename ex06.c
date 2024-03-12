#include <stdio.h>
int main ()
{
    printf("ïnserisci un numero\n");
    int a;
    scanf("%d", &a);
    if(a > 10)
    {
       printf("%d é maggiore di dieci\n", a);
    }
    if(a == 5)
    {
        printf("%d é uguale a 5\n", a);
    }
    if(a > 5)
    {
        printf("%d é maggiore di 5\n", a);
    }
    else
    {
        printf("%d é minore di 5\n", a);
    }
}