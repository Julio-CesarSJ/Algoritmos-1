#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[15][5];
    int R[15][5]; // A matriz R tem como função armazenar os numero que se repetem mais de uma vez, para evitar que a sua analise se repita diversas vezes
    int repete, repetido = 0;

    for(int i = 0; i < 15; i++)
    {

        // A matriz A recebe valores aleatórios até 100

        for(int j = 0; j < 5; j++)
        {
            R[i][j] = 102; // A matriz R recebe 102 em todas as posições, pois A não pode receber 102
            A[i][j] = rand() % 100;

            // Imprime a matriz A

            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {

            // A variável é zerada para poder contar quantas vezes um numero se repete

            repete = 0;

            for(int k = 0; k < 15; k++)
            {
                for(int l = 0; l < 5; l++)
                {

                    // Verifica se o valor em A[i][j] já foi analisado

                    if(A[i][j] == R[k][l])
                    {
                        repetido = 1;
                    }
                }
            }

            // Se sim avança para a próxima iteração do for(int j)

            if(repetido == 1)
            {
                repetido = 0;
                continue;
            }

            for(int n = 0; n < 15; n++)
            {
                for(int m = 0; m < 5; m++)
                {

                     // Verifica se A[i][j] se repete e quantas vezes se repete

                    if(A[i][j] == A[n][m])
                    {
                        repete++;
                    }
                }
            }

            // Se A[i][j] aparece mais de uma vez é impresso quantas vezes ele aparece

            if(repete > 1)
            {
                printf("\n %d repete %d vezes ", A[i][j], repete);

                // A[i][j] é armazenado em R para evitar que esse valor seja analisado novamente
                R[i][j] = A[i][j];
            }
        }

    }

    printf("\n");

    return 0;
}
