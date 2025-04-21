#include<stdio.h>

int main()
{
    //Declaração da variável
    int Numero;

    //Repete o processo até o usuário digitar 10 numeros
    for(int i = 1; i <= 10; i++)
    {
        //Pede que o usuário digite um numero
        printf("\n\n Digite um numero: ");

        //Armazena o numero digitado no espaço de memoria "Numero"
        scanf("%d", &Numero);

        //Verifica se o numero digitado é maior que 25 e menor que 85
        if((Numero > 25) && (Numero < 85))
        {
            //Imprime na tela que o numero digitado é maior que 25 e menor que 85
            printf("\n %d eh maior que 25 \n E menor que 85", Numero);
        }
    }

    return 0;
}
