#include <stdio.h>

int main()
{
    float N1, N2;

    printf("\n Insira um numero: ");
    scanf("%f", &N1);
    printf("\n Insira outro numero: ");
    scanf("%f", &N2);

    if(N1 > N2)
    {
        printf("\n %f Eh o Maior \n E %f o Menor", N1, N2);
    }
    if(N1 < N2)
    {
                printf("\n %f Eh o Maior \n E %f o Menor", N2, N1);

    }
    if(N1 == N2)
    {
        printf("\n\a INVALIDO!");
    }
    return 0;
}
