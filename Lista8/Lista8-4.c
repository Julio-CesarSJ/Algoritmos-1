#include<stdio.h>

int main()
{
  int N, resto;

  printf(" Digite um numero: \n");
  scanf("%d",&N);

  printf("\n O reverso de %d eh  ", N);
  while(N > 0)
  {
    resto = N % 10;
    N /= 10;
    printf("%d", resto);
  }

  printf("\n");

  return 0;
}
