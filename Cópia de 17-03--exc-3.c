#include<stdio.h>

int primo(int P)
  {
    int div = 0;

    for(int i = 1; i <= P; i++)
    {

      if(P % i == 0)
        {
          div++;
	    }
    }

    if(div == 2)
    {
      printf("%d eh primo\n",P);
      return 1;
    }
    else
    {
      return 0;
    }
  }

int somaP(int seq)
  {
    int soma = 0, N;

    for(int i = 1; i <= seq; i++)
    {
      N = primo(i);

      if(N == 1)
      {
        soma = soma + i;
      }
    }

    return soma;
  }

int main()
  {
    int seq;

    printf(" Tamanho da sequencia: \n ");
    scanf("%d",&seq);

    printf("\n Em uma sequencia de %d numeros a soma dos numeros primos eh %d \n",seq, somaP(seq));

    return 0;
  }
