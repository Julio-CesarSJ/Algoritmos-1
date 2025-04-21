#include<stdio.h>

int main()
{
  int A[10], B[10];


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
    for(int j = 0; j < 10; j++)
    {
      if(A[i] == B[j])
      {
        printf(" %d se repete em ambos! \n", A[i]);
        break;
      }
    }
  }

  return 0;
}
