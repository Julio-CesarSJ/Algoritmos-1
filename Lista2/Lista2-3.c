#include <stdio.h>

int main ()
{
    unsigned int num1, num2, num3, num4;

    printf("\n Digite o primeriro numero: ");
    scanf("%d", &num1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("\n Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("\n Digite o quarto numero: ");
    scanf("%d", &num4);

    printf("\n Media = %d", (num1+num2+num3+num4)/4);

    return 0;
}
