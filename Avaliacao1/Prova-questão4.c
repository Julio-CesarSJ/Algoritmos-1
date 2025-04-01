#include<stdio.h>

int main()
{
    //Declaração das variáveis
    int Dia, Mes, Ano;

    //Pede que o usuário entre com o dia do seu nascimento
    printf("\n Em que dia voce nasceu? ");

    //Armazena o dia no espaço de memoria "Dia"
    scanf("%d", &Dia);

    //Pede que o usuário entre com o mês do seu nascimento
    printf("\n Em que mes voce nasceu? ");

    //Armazena o mês no espaço de memoria "Mes"
    scanf("%d", &Mes);

    //Pede que o usuário entre com o ano do seu nascimento
    printf("\n Em que ano voce nasceu? ");

    //Armazena o ano no espaço de memoria "Ano"
    scanf("%d", &Ano);

    //Verifica se o dia, o mês e o ano são válidos(como uma pessoa dificílmente passa dos 100 anos de idade, o ano mínimo é 1900)
    if((((Dia <= 31) && (Dia >= 1)) && ((Mes <= 12) && (Mes >= 1))) && ((Ano <= 2024) && (Ano >= 1900)))
    {
        //Imprime na tela que a data é válida
        printf("\n Data Valida!");
    }

    //Se não imprime na tela que a data é inválida
    else
    {
        printf("\n Data Invalida!");
    }

    return 0;
}
