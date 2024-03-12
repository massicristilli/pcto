#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf("ä quanti anni si puo prendere la patente nel tuo paese?\n");
    scanf("%d", &a) ;
    printf("quanti anni hai?\n");
    scanf("%d", &b);
    if(b >= a)
    {
        printf("puoi prendere la patente!\n");
    } 
    else
    {
        printf("non puoi prendere la patente\n");
    }
}