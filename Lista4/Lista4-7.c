#include <stdio.h>

int main()
{
    int i = 0,n,t,somaI = 0,somaP = 0;
    int quantI = 0,quantP = 0;
    printf("\n Digite o inicio da sequencia: ");
    scanf("%d", &t);
    printf("\n Qual o tamanho da sequencia: ");
    scanf("%d", &n);

    printf("\n\n A sequencia eh : ");
    while(i < n)
    {
        if(t % 2 == 0)
        {
            somaP = somaP + t ;
            quantP++;
        }
        if(t % 2 != 0)
        {
            somaI = somaI + t;
            quantI++;
        }
        printf("%d ",t);
        t++;
        i++;
    }

    printf("\n\n A soma dos impares: %d ", somaI);
    printf("\n\n A soma dos pares: %d ", somaP);
    printf("\n\n %d numeros impares e %d numeros pares", quantI, quantP);
    return 0;
}
