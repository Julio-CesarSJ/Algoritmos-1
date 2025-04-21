#include<stdio.h>

int main()
{
    //Declaração das variáveis
    int N,div = 0,soma = 0, contador = 0;

    //Pede que o usuário digite um numero
    printf("\n Digite um numero: ");

    //Armazena o numero no espaço "N"
    scanf("%d", &N);

    //Repete até encontrar e somar uma quantidade de numeros primos igual ao numero digitado
    for(int i = 1; contador != N; i++)
    {
        //Zera o numero de divisores a cada iteração
        div = 0;

        //Divide i por j até j atingir o valor de i
        for(int j = 1; j <= i; j++)
        {
            //Verifica por quantos numeros i é divisível
            if(i % j == 0)
            {
                //Aumenta o numero de divisores
                div++;
            }
        }

        //Se for divisível apenas por 2 numeros, então é primo
        if(div == 2)
        {
            //Imprime na tela o numero primo
            printf("\n %d", i);

            //Faz a soma de todos os numeros primos que encontrar
            soma += i;

            //Aumenta sempre que um numero primo é encontrado
            contador++;
        }
    }

    //Imprime na tela a soma dos N primeiros numeros primos
    printf("\n A soma dos %d primeiros numeros primos eh %d \n", N, soma);

    return 0;
}
