#include <stdio.h>

int main()
{
    int dia,mes,ano,valido1,valido2,valido3;

    printf("\n Em Qual Dia Voce Nasceu? ");
    scanf("%d", &dia);
    printf("\n Em Qual Mes Voce Nasceu? ");
    scanf("%d", &mes);
    printf("\n Em Qual ano Voce Nasceu? ");
    scanf("%d", &ano);

    if(dia >= 1 && dia <=31)
    {
        valido1 = 2;
    }
    if(mes >= 1 && mes <= 12)
    {
        valido2 = 2;
    }
    if(ano <= 2024)
    {
        valido3 = 2;
    }
    if(valido1 == 2 && valido2 == 2 && valido3 == 2)
    {
        printf("\n Data Valida ");
    }
    else
    {
        printf("\n Data Invalida");
    }


    return 0;
}
