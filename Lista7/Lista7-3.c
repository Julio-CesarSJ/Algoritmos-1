#include<stdio.h>
#include<stdlib.h>

int main()
{
    float M[12][13];
    float maior, MaiorL;

    printf("Matriz Lida: \n\n");


    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            M[i][j] = rand() % 100;
            printf(" %.2f ", M[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");
    printf("Matriz Modificada: \n\n");

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            maior = 0;
            for(int k = 0; k < 13; k++)
            {
                if(M[i][j] >= M[i][k])
                {
                    maior++;
                }
            }

            if(maior == 13)
            {
                MaiorL = M[i][j];

                for(int l = 0; l < 13; l++)
                {
                    M[i][l] = M[i][l] / abs(MaiorL);
                    printf(" %.2f ", M[i][l]);
                }

                printf("\n");
            }
        }
    }

    return 0;
}
