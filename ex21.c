#include <stdio.h>

int main ()
{
    char *a = "nome di persona";
    printf("inserisci il tuo nome\n");
    int b = 0;
    while(a[b] != '\0')
    {
      scanf("%c", &a[b]);
      b++;
    }
    b = 0;
    printf("\n");
    printf("il tuo nome e'\n");
    while(a[b] != '\0')
    {
        printf("%c", a[b]);
        b++;
    }

}