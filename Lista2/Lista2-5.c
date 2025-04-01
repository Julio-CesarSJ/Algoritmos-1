#include <stdio.h>
#include <math.h>

int main()
{
    float corrente, tensao, resistencia, potencia;

    printf("\t Para Calcular a Potencia Insira os Dados:  ");
    printf("\n\n Qual a corrente? ");
    scanf("%f", &corrente);
    printf("\n Qual a tensao? ");
    scanf("%f", &tensao);
    printf("\n Qual a resistencia? ");
    scanf("%f", &resistencia);

    if(corrente == 0)
    {
        potencia = pow(tensao,2)/resistencia;
        printf("\n POTENCIA = %f", potencia);
    }
    if(tensao == 0)
    {
        potencia = resistencia * pow(corrente,2);
        printf("\n POTENCIA = %f", potencia);
    }
    if(resistencia == 0)
    {
        potencia = corrente * tensao;
        printf("\n POTENCIA = %f", potencia);
    }

    return 0;
}
