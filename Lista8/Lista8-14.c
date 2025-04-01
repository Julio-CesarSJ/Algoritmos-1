#include <stdio.h>

int main()
{
  int M[3][3];
  int soma = 0;

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("Digite um numero: \n");
      scanf("%d", &M[i][j]);

      if((i == 1) && (j == 0))
      {
        soma += M[i][j];
      }
      if((i == 2) && (j == 0))
      {
        soma += M[i][j];
      }
      if((i == 2) && (j == 1))
      {
        soma += M[i][j];
      }
    }
  }

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf(" %d ", M[i][j]);
    }
    printf("\n");
  }

  printf("\n A soma dos numeros abaixo da diagonal principal eh %d \n", soma);

  return 0;
}
