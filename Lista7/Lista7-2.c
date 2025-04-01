#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15][5], B[15][5], Vet[75];
    int rep = 0, igual = 0,pare = 0;

    for(int i = 0; i < 15; i++)
    {
        Vet[i] = 102;
        for(int j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 100;
            B[i][j] = A[i][j];
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 15; i++)
    {
        pare = 0;

        for(int j = 0; j < 5; j++)
        {
            rep = 0;

            for(int x = 0; x < 75; x++)
            {
                if(Vet[x] == A[i][j])
                {
                    pare = 1;
                    break;
                }
            }

            for(int k = 0; k < 15; k++)
            {

                for(int l = 0; l < 5; l++)
                {
                    if(pare == 1)
                {
                    break;
                }
                    if(A[i][j] == B[k][l])
                    {
                        rep++;
                    }
                }
            }

            if(rep > 1)
            {

                printf("\n %d repete %d vezes", A[i][j],rep);
                Vet[igual] = A[i][j];
                igual++;
            }
        }
    }


    return 0;
}
