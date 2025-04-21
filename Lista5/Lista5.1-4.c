#include <stdio.h>

int main()
{
    int div,n,p=0,soma=0;

    printf("\n Digite um numero: ");
    scanf("%d", &n);

    for(int i = 2;;i++)
    {
        div = 1;
        for(int j = 2; j*j <= i ;j++)
        {
            if(i % j == 0)
            {
                div=0;
                break;
            }
        }

        if(div == 1)
        {
            soma = soma + i;
            printf("\n %d", i);
            p++;
        }
        if(p == n)
        {
            break;
        }
    }

    printf("\n\n A soma eh %d", soma);

    return 0;
}

