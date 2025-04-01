#include<stdio.h>

int main()
{
  int N, div;
  int algarismo = 0;

  printf("Digite um numero: \n");
  scanf("%d", &N);

  div = N;

  do
  {
    div = div / 10;
    algarismo++;
  }
  while(div > 0);

  printf(" %d tem %d algarismos!\n", N, algarismo);

  return 0;
}
