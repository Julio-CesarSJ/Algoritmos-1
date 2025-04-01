#include <stdio.h>

int main()
{
  int n;
  float i,soma=0;

  printf("\n Insira um numero: ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
    soma = soma + 1/i;
  }

  printf("\n\n resultado eh %f", soma);


  return 0 ;
}
