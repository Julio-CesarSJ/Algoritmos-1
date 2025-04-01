#include<stdio.h>

  int sinal(int N)
{
  if(N > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }    

}	

int main()
{
  int Num,resp;

  printf("digite um numero: \n");
  scanf("%d",&Num);

  resp = sinal(Num);

  printf("\n %d\n ", resp);

  return 0;
}	
