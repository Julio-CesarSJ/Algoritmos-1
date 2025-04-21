#include <stdio.h>

int main()
{
    float idade, peso;

    printf("\n Digite Sua Idade: ");
    scanf("%f", &idade);
    printf("\n Digite Seu Peso(Em Kg): ");
    scanf("%f", &peso);

    if(idade >= 18 && idade <= 69 && peso >= 50)
    {
        printf("\n Voce Pode Doar Sangue!");
    }
    else
    {
        printf("\n Voce Nao Pode Doar Sangue!");
    }
    return 0;
}
