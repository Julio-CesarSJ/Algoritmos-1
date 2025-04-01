#include<stdio.h>

int main()
{
  int A[10];
  int X, Y, x1, y1;

  for(int i = 0; i < 10; i++)
  {
    printf("Digite um valor para A[%d]: \n", i);
    scanf("%d", &A[i]);
  }

  printf("Valor da posiçao: \n");
  scanf("%d", &X);

  printf(" Mudar com valor da posicao: \n");
  scanf("%d", &Y);

  printf("\n Vetor A: ");

  x1 = A[X];
  y1 = A[Y];

  for(int i = 0; i < 10; i++)
  {
    if(i == X)
    {
      A[i] = y1;
    }

    if(i == Y)
    {
      A[i] = x1;
    }

    printf("%d ", A[i]);
  }

  printf("\n");

  return 0;
}
