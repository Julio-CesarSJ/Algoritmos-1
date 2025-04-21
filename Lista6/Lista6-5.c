#include <stdio.h>

int main()
{
    int VetorA[20];
    int VetorB[20];

    printf("\n Vetor A: \n");

    for(int i = 0; i < 20; i++)
    {
        VetorA[i] = 5 + i;
        printf("\n %d", VetorA[i]);
    }

    printf("\n\n Vetor B: \n");

    for(int j = 0; j < 20; j++)
    {
        VetorB[j] = VetorA[j] * 2;
        printf("\n %d", VetorB[j]);
    }

    return 0;
}
