#include<stdio.h>

int main()
{
  int N,Num,digito,base = 1,i = 1;

  printf("Digite um numero: \n");
  scanf("%d", &Num);

  printf("Qual digito deseja encontrar? \n");
  scanf("%d", &N);

  while(i <= N - 1)
  {
    base *= 10;
    i++;
  }

  digito = (Num / base) % 10;

  printf(" O %d-esimo digito eh %d \n", N, digito);

  return 0;
}
