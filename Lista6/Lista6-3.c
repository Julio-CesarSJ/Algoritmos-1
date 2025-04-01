#include <stdio.h>

int main()
{
    int Logica[10];
    int LP[8];

    printf("\n Insira a matricula dos alunos que cursam Logica (MAX. 10) ");

    for(int i = 0; i < 10; i++)
    {
        printf("\n Matricula: ");
        scanf("%d", &Logica[i]);
    }

    printf("\n Insira a matricula dos alunos que cursam Linguagem de Programacao (MAX. 8) ");

    for(int j = 0; j < 8; j++)
    {
        printf("\n Matricula: ");
        scanf("%d", &LP[j]);
    }

    printf("\n Alunos matriculados em ambas as diciplinas: ");

    for(int k = 0; k < 10; k++)
    {
        for(int l = 0; l < 8; l++)
        {
            if(Logica[k] == LP[l])
            {
                printf("\n Matricula: %d \n", Logica[k]);
                break;
            }
        }
    }

    return 0;
}
