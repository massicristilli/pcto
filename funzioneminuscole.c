#include <stdio.h>

void minuscole(char **parola)
{
    int b = 0;
    while((*parola)[b] != '\0')
    {
        if((*parola)[b] >= 65 && (*parola)[b] <= 90)
        {
            (*parola)[b] = (*parola)[b] + 32;
        }
        b++; 
    }
}

int main()
{
    char *a;
    printf("dammi una parola con le maiuscole\n");
    scanf(" %[^\n]s", a);
    minuscole(&a);
    printf("la tua parola e %s \n",a);
}