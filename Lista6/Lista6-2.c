#include <stdio.h>

int main()
{
    int Vet[8];

    for(int i = 0; i < 8; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", & Vet[i]);
    }

    printf("\n Multiplos de 2: \n\n");

    for(int j = 0; j < 8; j++)
    {
        if(Vet[j] % 2 == 0)
        {
            printf(" %d ", Vet[j]);
        }
    }

    printf("\n\n Multiplos de 3: \n\n");

    for(int k = 0 ; k < 8; k++)
    {
        if(Vet[k] % 3 == 0)
        {
            printf(" %d ", Vet[k]);
        }
    }

    printf("\n\n Multiplos de 2 e 3: \n\n");

    for(int l = 0; l < 8; l++)
    {
        if((Vet[l] % 2 == 0) && (Vet[l] % 3 == 0))
        {
            printf(" %d ", Vet[l]);
        }
    }

    return 0;
}
