#include <stdio.h>

int main()
{
    int n,soma;
    soma = 0;

    printf("\n Digite um numero: ");
    scanf("%d", &n);

    while(n > 0)
    {
        soma = soma + n;
        printf("\n soma = soma + n / %d = %d + %d", soma, soma, n);
        n--;
    }
    printf("\n\n Resultado = %d \n\n", soma);
    return 0;
}
