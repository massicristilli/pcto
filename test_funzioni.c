#include <stdio.h>

int dimmi_num_primo(int fd)
{
    int n = fd - 1;
    int b = 0;
    while(n>1)
    {
       if(fd % n == 0)
       {
          b = b + 1;
       }
       n--;
    }
    return b;
}

int calcola_area(int *l1, int l2)
{
    (*l1) = 1;
    printf("li = %d\n", l1);
    return (l1*l2);
}

int main()
{
    int var1 = 5;
    int var2 = 5;
    int a = calcola_area(&var1, var2);
    printf("var1 = %d\n", var1);
    int primo = dimmi_num_primo(a);

    if(primo != 0)
    {
        printf("il tuo numero non é primo\n");
    }
    else if(primo == 0)
    {
        printf("il tuo numero é primo\n");
    }
    return 0;
}