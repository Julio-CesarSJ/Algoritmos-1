#include <stdio.h>

int main()
{
    int i=1,x,n,potencia=1;

    printf("\n Insira a base: ");
    scanf("%d", &x);
    printf("\n Insira o expoente: ");
    scanf("%d", &n);

    while(i <= n)
    {
        potencia = potencia * x;
        i++;
    }

    printf("\n %d Elevado a %d Eh %d", x,n,potencia);
    return 0;
}
