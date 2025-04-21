#include <stdio.h>

int main()
{
    int n,soma=0;

    do
    {
        printf("\n Digite um numero \n (0) para sair : ");
        scanf("%d", &n);
        soma = soma + n;
    }
    while(n != 0);

    printf("\n Soma = %d", soma);

    return 0;
}
