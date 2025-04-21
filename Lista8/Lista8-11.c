#include<stdio.h>

int main()
{
  int A[10], B[10], C[20];
  int N = 2;

  for(int i = 0; i < 10; i++)
  {
    printf("Digite um valor para A[%d]: \n", i);
    scanf("%d", &A[i]);
  }

  printf("\n\n");

  for(int i = 0; i < 10; i++)
  {
    printf("Digite um valor para B[%d]: \n", i);
    scanf("%d", &B[i]);
  }

  for(int i = 0; i < 10; i++)
  {
    C[i] = A[i];
  }

  for(int i = 0; i < 10; i++)
  {
    C[10 + i] = B[i];
  }

  printf("\n\n Vetor C:");

  for(int i = 0; i < 20; i++)
  {
    printf(" %d",C[i]);
  }

  printf("\n");

  return 0;
}
