#include <stdio.h>

int main()
{
    int i=0,dia,temp,media,soma=0;

    printf("\n Quantos Dias? :");
    scanf("%d", &dia);

    while(i < dia)
    {
        printf("\n Temperatura: ");
        scanf("%d", &temp);
        soma = soma + temp;
        i++;
    }

    media = soma / dia;
    printf("\n A media eh %d", media);
    return 0;
}
