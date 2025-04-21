#include <stdio.h>

int main()
{
    unsigned int i = 1,n,fatorial=1;

    printf("\n Digite um numero: ");
    scanf("%d", &n);

    while(i <= n)
    {
        fatorial = fatorial * i;
        printf("\n %d", i);
        i++;
    }
    printf("\n\n Fatorial de %d Eh %d", n,fatorial);
    return 0;
}
