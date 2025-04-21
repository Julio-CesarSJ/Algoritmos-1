#include <stdio.h>

int main()
{
    int idade,n,soma=0,i=1,somaM=0,med=0;
    float media=0;

    printf("\n Quantas idades voce ira inserir? ");
    scanf("%d", &n);

    do
    {
        printf("\n Insira uma idade: ");
        scanf("%d", &idade);
        if(idade >= 18)
        {
            soma = soma + idade;
        }
        if(idade < 18)
        {
            somaM = somaM + idade;
            med++;
        }
        i++;
    }
    while(i <= n);

    media = somaM / med;

    printf("\n A soma da idade dos maiores de idade eh %d ", soma);

    printf("\n\n A media das idades dos menores de idade eh %f ", media);

    return 0;
}
