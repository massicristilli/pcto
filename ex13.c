#include <stdio.h>

int main ()
{
    int a;
    printf("ïnserisci un anno\n");
    scanf("%d", &a);
    if(a % 400 == 0)
    {
        printf("il tuo anno é bisestile\n");
    }
    else if((a % 4 == 0) && (a % 100 != 0))
    {
        printf("änno bisestile\n");
    }
    else
    {
        printf("non é bisestile\n");
    }
}