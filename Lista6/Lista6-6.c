#include <stdio.h>

int main()
{
    int Vetor[8];
    int Maior;

    for(int i = 0; i < 8; i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &Vetor[i]);
    }

    for(int j = 0; j < 8; j++)
    {
        Maior = 0;
        for(int k = 0; k < 8; k++)
        {
            if(Vetor[j] >= Vetor[k])
            {
                Maior++;
            }
        }

        if(Maior == 8)
            {
                printf("\n %d eh o maior numero do vetor", Vetor[j]);
                break;
            }
    }

    return 0;
}
