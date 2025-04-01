#include <stdio.h>

int main()
{
  int n,i,soma=0,mult=0;

  printf("\n Insira um numero: ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
    mult = 1 * i;
    soma = soma + mult;
  }

  soma = soma / n;

  printf("\n\n Resultado = %d", soma);

  return 0;
}
