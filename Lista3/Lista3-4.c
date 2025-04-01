#include <stdio.h>

int main()
{
    char sexo;
    int idade;

    printf("\n Voce eh do sexo masculino?( s ou n ): ");
    scanf("%c", &sexo);
    printf("\n Qual a sua idade? : ");
    scanf("%d", &idade);

    if(sexo == 's' && idade == 18)
    {
        printf("\n Voce precisa se alistar!");
    }
    else
    {
        printf("\n Voce nao precisa se alistar!");
    }

    return 0;
}
