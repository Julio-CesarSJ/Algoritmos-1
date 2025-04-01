#include<stdio.h>

int main()
{
    int V[10] = {10, 12, 2, 9, 8, 51, 27, 10, 1, 7};
    int A[9];

    printf("\n Vetor A: ");

    for(int i = 0; i < 9; i++)
    {
        A[i] = V[i] + V[i+1];
        printf(" %d ", A[i]);
    }

    printf("\n");

    return 0;
}
