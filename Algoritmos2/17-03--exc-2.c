#include<stdio.h>

int soma(int N1, int N2)
  {
    int soma = 0;
    soma = N1;

    for(int i = N1 + 1; i <= N2; i++)
    {
      soma += i;
      printf("%d\n ", soma);
    }

    return soma;
  }

int main()
  {
    int Num1, Num2;

    printf("Digite um numero: \n");
    scanf("%d",&Num1);

    printf("Digite outro numero: \n");
    scanf("%d",&Num2);

    printf("\n ");

    printf("\n A soma dos numeros inteiros entre %d e %d eh %d\n", Num1, Num2, soma(Num1,Num2));

    return 0;
  }
