#include <stdio.h>

int main()
{
  int A[10];
  int posicao, valor;

  for(int i = 0; i < 10; i++)
  {
    printf("\n Insira o valor da posicao A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  printf("\n Qual valor deseja econtrar? ");
  scanf("%d", &valor);

  for(int i = 0; i < 10; i++)
  {
    if(A[i] == valor)
    {
      posicao = i;
      break;
    }
  }

  printf("\n O valor se encontra na posicao %d \n", posicao);

  return 0;
}
