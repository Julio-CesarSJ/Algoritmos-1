/*
Dada uma matriz M, de dimensões 5x5, faça um algoritmo que calcule o determinante
dessa matriz
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int M[5][5], A[3][3];
    int Det3, Det3_1, Det3_2, Cof;
    int Det4 = 0, Det5 = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("\n Digite: ");
            scanf("%d", &M[i][j]);

            if((i >= 2) & (j >= 2))
            {
                A[i-2][j-2] = M[i][j];
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" %d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ", A[i][j]);
        }
        printf("\n");
    }

    Det3_1 = ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1]));
    Det3_2 = ( - (A[2][0] * A[1][1] * A[0][2]) - ((A[2][1] * A[1][2] * A[0][0]) - ((A[2][2] * A[0][1] * A[1][0])))) ;
    Det3 = Det3_1 + Det3_2;

    for(int i = 1; i < 5; i++)
    {
        for(int j = 1; j < 5; j++)
        {
            Cof = (pow(-1, i+j)) * Det3;
            Det4 = Det4 + (M[i][j] * Cof);
        }
    }

    for(int i = 2; i < 5; i++)
    {
        for(int j = 2; j < 5; j++)
        {
            Cof = (pow(-1, i+j)) * Det4;
            Det5 = Det4 + (M[i][j] * Cof);
        }
    }

    printf("\n\n O determinante eh %d \n", Det5);

    return 0;
}
