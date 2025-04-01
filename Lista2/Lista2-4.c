#include <stdio.h>
#include <math.h>

int main()
{
    int num, quadrado;

    printf("\n Insira um numero: ");
    scanf("%d", &num);
    quadrado = pow(num, 2);

    if(num % 2 == 0)
    {
        printf("\n Eh Par!");
        printf("\n Quadrado = %d", quadrado);
    }
    else
    {
        printf("\n Eh Impar! \n Invalido");
    }
    return 0;
}
