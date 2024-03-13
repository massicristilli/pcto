#include <stdio.h>

int main ()
{
    char nome[100];
    char cognome[100];
    printf("inserisci il tuo nome\n");
    scanf(" %[^\n]s", nome);
    printf("inserisci il tuo cognome\n");
    scanf(" %[^\n]s", cognome);
    printf("il tuo nome é %s, e il tuo cognome é %s\n", nome, cognome);
}
