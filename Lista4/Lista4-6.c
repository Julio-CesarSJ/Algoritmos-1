#include <stdio.h>

int main()
{
    int i = 0,n,n1,soma;

    printf("\n Digite o tamanho da sequencia: ");
    scanf("%d", &n);
    printf("\n Digite o primeiro numero da sequencia: ");
    scanf("%d", &n1);

    while(i <= n)
    {
        soma = n1 + i;
        printf("\n %d", soma);
        i++;
    }

    printf("\n\n O Maior Numero Eh %d", soma);
    printf("\n O Menor Numero Eh %d", n1);
    return 0;
}
