#include<stdio.h>

int main()
{
  int A[10], B[10];
  char C[10];
  int rep;

  for(int i = 0; i < 10; i++)
  {
    printf("Digite um valor para A[%d]: ", i);
    scanf("%d",&A[i]);
    B[i] = A[i];
    C[i] = 'a';
  }

  for(int i = 0; i < 10; i++)
  {
    rep = 0;

    for(int j = 0; j < 10; j++)
    {
      if(A[i] == C[j])
      {
        rep = 0;
        break;
      }
      if(A[i] == B[j])
      {
        rep++;
      }
    }

    if(rep > 1)
    {
      printf(" %d repete %d vezes \n", A[i], rep);
      C[i] = A[i];
    }
  }

  return 0;
}
