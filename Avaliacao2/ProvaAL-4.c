#include<stdio.h>

int main()
{
    int V[10] = {-12, 5, 7, -2, 3, -4, 11, -8, 10, -2};
    int SomaP = 0, SomaN = 0;

    for(int i = 0; i < 10; i++)
    {
        // Se o numero � positivo soma e armazena na vari�vel SomaP

        if(V[i] > 0)
        {
            SomaP += V[i];
        }

        // Se n�o, ent�o o numero � negativo, soma e armazena na vari�vel SomaN

        else
        {
            SomaN += V[i];
        }
    }

    // Imprime a soma dos numeros positivos

    printf("\n A soma dos numeros positivos: %d \n", SomaP);

    // Imprime a soma dos numeros negativos

    printf("\n A soma dos numeros negativos: %d \n", SomaN);

    return 0;
}
