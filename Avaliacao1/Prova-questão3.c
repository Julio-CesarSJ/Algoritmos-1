#include<stdio.h>

int main()
{
    //Declaração das variáveis
    int Numero, Quadrado;

    //Pede que o usuário entre com um numero
    printf("\n Digite um numero: ");

    //Armazena o numero inserido no espaço de memoria da variável "Numero"
    scanf("%d", &Numero);

    //Verifica se o numero é par
    if(Numero % 2 == 0)
    {
        //Atribui a variável "Quadrado" o quadrado do numero inserido
        Quadrado = Numero * Numero;

        //Imprime na tela o quadrado do numero inserido
        printf("\n %d eh par, e seu quadrado eh %d\n", Numero, Quadrado);
    }

    //Se não imprime na tela que o numero inserido é impar
    else
    {
        printf("\n %d eh impar!\n", Numero);
    }

    return 0;
}
