#include<stdio.h>

int main()
{
    //Declara��o das vari�veis
    int Numero, Quadrado;

    //Pede que o usu�rio entre com um numero
    printf("\n Digite um numero: ");

    //Armazena o numero inserido no espa�o de memoria da vari�vel "Numero"
    scanf("%d", &Numero);

    //Verifica se o numero � par
    if(Numero % 2 == 0)
    {
        //Atribui a vari�vel "Quadrado" o quadrado do numero inserido
        Quadrado = Numero * Numero;

        //Imprime na tela o quadrado do numero inserido
        printf("\n %d eh par, e seu quadrado eh %d\n", Numero, Quadrado);
    }

    //Se n�o imprime na tela que o numero inserido � impar
    else
    {
        printf("\n %d eh impar!\n", Numero);
    }

    return 0;
}
