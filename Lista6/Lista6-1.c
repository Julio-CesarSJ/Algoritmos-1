#include <stdio.h>

int main()
{
    int Vet[6];
    int par = 0, impar = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &Vet[i]);
    }

    printf("\n");

    for(int j = 0; j < 6; j++)
    {
        if(Vet[j] % 2 == 0)
        {
            printf(" %d ", Vet[j]);
            par++;
        }
    }

    printf("\n\n A quantidade de numeros pares eh %d \n\n", par);

    for(int k = 0; k < 6; k++)
    {
        if(Vet[k] % 2 != 0)
        {
            printf(" %d ", Vet[k]);
            impar++;
        }
    }

    printf("\n\n A quantidade de numeros impares eh %d \n", impar);

    return 0;
}
