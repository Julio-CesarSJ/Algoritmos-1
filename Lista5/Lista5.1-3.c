#include <stdio.h>

int main()
{
    int n,div=0,resto=0,binario=0,base=1,result;

    printf("\n Digite um numero: ");
    scanf("%d", &n);

    div = n;

    while(div/2!=0)
    {
        resto = div % 2;
        div = div / 2;

        binario = resto * base + binario;

        base = base * 10;
        result = binario + base;

    }


    printf("\n %d => %d",n,result);

    return 0;
}
