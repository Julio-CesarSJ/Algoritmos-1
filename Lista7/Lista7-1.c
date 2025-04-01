#include<stdio.h>

int main()
{
    int M[5][5];
    int soma4 = 0, soma2 = 0, somad = 0, somat = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("\n Digite um numero: ");
            scanf("%d", &M[i][j]);
            somat += M[i][j];

            if(i == 3)
            {
                soma4 += M[i][j];
            }
            if(j == 1)
            {
                soma2 += M[i][j];
            }
            if( i == j)
            {
                somad += M[i][j];
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

    printf("\n A soma da linha 4 eh %d ", soma4);
    printf("\n A soma da coluna 2 eh %d ", soma2);
    printf("\n A soma da diagonal principal eh %d ", somad);
    printf("\n A soma de todos os elementos eh %d ", somat);

    return 0;
}
