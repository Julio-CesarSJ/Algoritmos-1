#include <stdio.h>

int main ()
{
    int numero = 1;

    while(numero > 0)
    {
        printf("\n Digite um valor: ");
        scanf("%d", &numero);
        printf("\n\n Quadrado de %d = %d \n\n", numero, numero*numero);
    }
    printf("\n\n Fim \n\n");

    return 0;
}
