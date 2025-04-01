#include<stdio.h>

int main()
{
  int N, N2, N3, resto, algarismo = 0, palindromo = 0, i = 1;

  printf("Digite um numero: \n");
  scanf("%d",&N);

  N2 = N;
  N3 = N;

  while(N2 > 0)
  {
    N2 = N2 / 10;
    algarismo++;
  }

  for(int j = 1; j < algarismo; j++)
  {
    i *= 10;
  }

  while(N > 0)
  {
    resto = N % 10;
    N /= 10;
    palindromo += resto * i;
    i /= 10;
  }

  printf("\n %d \n", palindromo);

  if(N3 == palindromo)
  {
    printf("\n Esse numero eh um palindromo!\n");
  }
  else
  {
    printf("\n Esse numero nao eh um palindromo!\n");
  }

  return 0;
}
