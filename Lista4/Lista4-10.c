#include <stdio.h>

int main ()
{
    int i = 1, Num, div = 0;

    printf("\n Insira um numero: ");
    scanf("%d", &Num);

    while(i <= Num)
    {
        if( Num % i == 0)
        {
            div++;
        }

        i++;
    }

    if(div == 2)
    {
        printf("\n Eh Primo!");
    }
    else
    {
        printf("\n Nao Eh Primo!");
    }

    return 0;
}
