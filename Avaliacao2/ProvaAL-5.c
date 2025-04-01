#include<stdio.h>

int main()
{
    int A[10] = {102, 103, 104, 105, 106, 107, 201, 202, 204, 205};
    int B[8] = {201, 202, 203, 204, 206, 207, 208, 209};


    printf("\n Alunos matriculados na diciplina 1: ");

    // Imprime a matricula dos alunos da diciplina 1

    for(int i = 0; i < 10; i++)
    {
        printf(" %d ", A[i]);
    }

    printf("\n\n Alunos matriculados na diciplina 2: ");

    // Imprime a matricula dos alunos da diciplina 2

    for(int i = 0; i < 8; i++)
    {
        printf(" %d ", B[i]);
    }

    printf("\n\n Alunos matriculados em ambas as diciplinas: ");

    // Imprime a matricula dos alunos matriculados nas diciplinas 1 e 2

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            // Verifica se um aluno matriculado na diciplina 1 também está matriculado na diciplina 2
            // Se sim, imprime na tela

            if(A[i] == B[j])
            {
                printf(" %d ", A[i]);
            }
        }
    }

    printf("\n");

    return 0;
}
