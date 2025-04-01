#include <stdio.h>

int main()
{
    float VetorA[6];
    float VetorB[6];
    float soma = 0;

    printf("\n Vetor A \n");

    for(int i = 0; i < 6; i++)
    {
        printf("\n Insira um valor: ");
        scanf("%f", &VetorA[i]);
    }

    printf("\n Vetor B \n");

    for(int j = 0; j < 6; j++)
    {
        printf("\n Insira um valor: ");
        scanf("%f", &VetorB[j]);
    }

    printf("\n\n Novo Vetor A \n");

    for(int k = 0; k < 6; k++)
    {
        soma = VetorA[k] + VetorB[k];
        VetorA[k] = soma;
        printf("\n %.0f ", VetorA[k]);
    }

    return 0;
}
