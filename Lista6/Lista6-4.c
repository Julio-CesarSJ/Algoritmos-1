#include <stdio.h>

int main()
{
    int VetorA[10];

    for(int i = 0; i < 10; i++)
    {
        VetorA[i] = 21 + i;

        printf("\n %d ", VetorA[i]);
    }

    return 0;
}
