#include <stdio.h>

int main()
{
    int a,b,c,d,e,i,ordemC=0,ordemD=0;
    i = -100000;

    printf("\n Insira um numero: ");
    scanf("%d", &a);
    printf("\n Insira um numero: ");
    scanf("%d", &b);
    printf("\n Insira um numero: ");
    scanf("%d", &c);
    printf("\n Insira um numero: ");
    scanf("%d", &d);
    printf("\n Insira um numero: ");
    scanf("%d", &e);

    printf("\n Oedem Crescente:");

    while(ordemC!=5)
    {
        if((((i==a)||(i==b))||((i==c)||(i==d)))||(i==e))
        {
            printf(" %d ",i);
            ordemC++;
        }
        if(ordemC==5)
        {
            break;
        }
        i++;
    }

    printf("\n\n Ordem Decrescente: ");

    while(ordemD!=5)
    {
        if((((i==a)||(i==b))||((i==c)||(i==d)))||(i==e))
        {
            printf(" %d ",i);
            ordemD++;
        }
        if(ordemD==5)
        {
            break;
        }
        i--;
    }

    printf("\n");

    return 0;
}
