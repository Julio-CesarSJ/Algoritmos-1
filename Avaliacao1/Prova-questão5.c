#include<stdio.h>

int main()
{
    //Declara��o da vari�vel
    int Numero;

    //Repete o processo at� o usu�rio digitar 10 numeros
    for(int i = 1; i <= 10; i++)
    {
        //Pede que o usu�rio digite um numero
        printf("\n\n Digite um numero: ");

        //Armazena o numero digitado no espa�o de memoria "Numero"
        scanf("%d", &Numero);

        //Verifica se o numero digitado � maior que 25 e menor que 85
        if((Numero > 25) && (Numero < 85))
        {
            //Imprime na tela que o numero digitado � maior que 25 e menor que 85
            printf("\n %d eh maior que 25 \n E menor que 85", Numero);
        }
    }

    return 0;
}
