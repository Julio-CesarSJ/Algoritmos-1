#include <stdio.h>

int main()
{
    int n,i,j,ctl = 0, multiplo = 0;

    printf("\n Qual o tamanho da sequencia? ");
    scanf("%d", &n);
    printf("\n Digite um numero: ");
    scanf("%d", &i);
    printf("\n Digite outro numero: ");
    scanf("%d", &j);

    while(multiplo < n)
    {
        if((ctl % i == 0)||(ctl % j == 0))
        {
            printf(" %d ", ctl);
            multiplo++;
        }

        ctl++;
    }

    return 0;
}
