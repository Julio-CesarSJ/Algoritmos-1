#include<stdio.h>

int main()
{
  int X,Y,resto = 1;

  printf("Digite um valor para X: \n");
  scanf("%d", &X);
  printf("Digite um valor para Y: \n");
  scanf("%d", &Y);

  while(resto != 0)
  {
    resto = X % Y;
    X = Y;
    Y = resto;
  }

  printf("O mdc de X e Y eh %d \n", X);

  return 0;
}
