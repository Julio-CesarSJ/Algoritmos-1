#include<stdio.h>

int main()
{
    //Declara��o das vari�veis
    int Dia, Mes, Ano;

    //Pede que o usu�rio entre com o dia do seu nascimento
    printf("\n Em que dia voce nasceu? ");

    //Armazena o dia no espa�o de memoria "Dia"
    scanf("%d", &Dia);

    //Pede que o usu�rio entre com o m�s do seu nascimento
    printf("\n Em que mes voce nasceu? ");

    //Armazena o m�s no espa�o de memoria "Mes"
    scanf("%d", &Mes);

    //Pede que o usu�rio entre com o ano do seu nascimento
    printf("\n Em que ano voce nasceu? ");

    //Armazena o ano no espa�o de memoria "Ano"
    scanf("%d", &Ano);

    //Verifica se o dia, o m�s e o ano s�o v�lidos(como uma pessoa dific�lmente passa dos 100 anos de idade, o ano m�nimo � 1900)
    if((((Dia <= 31) && (Dia >= 1)) && ((Mes <= 12) && (Mes >= 1))) && ((Ano <= 2024) && (Ano >= 1900)))
    {
        //Imprime na tela que a data � v�lida
        printf("\n Data Valida!");
    }

    //Se n�o imprime na tela que a data � inv�lida
    else
    {
        printf("\n Data Invalida!");
    }

    return 0;
}
