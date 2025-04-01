#include <stdio.h>

int main ()
{
    char L1;
    int n1;
    float n2;

    printf("\n Digite uma letra: ");
    scanf("%c", &L1);

    printf("\n Digite um numero: ");
    scanf("%d", &n1);

    printf("\n Digite um numero: ");
    scanf("%f", &n2);

    printf("\n Voce digitou: %c, %d, %f", L1, n1, n2);
    return 0;
}
