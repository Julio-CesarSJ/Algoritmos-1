#include<stdio.h>

int main()
{
  int A[10];
  int N;

  for(int i = 0; i < 10; i++)
  {
    printf("Digite um valor para A[%d]: \n", i);
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < 10; i++)
  {
    for(int j = i + 1; j < 10; j++)
    {
      if(A[i] > A[j])
      {
        N = A[i];
        A[i] = A[j];
        A[j] = N;
      }
    }
  }

  printf("Ordem Crescente: \n");

  for(int i = 0; i < 10; i++)
  {
    printf("%d ", A[i]);
  }

  printf("\n");

  return 0;
}
