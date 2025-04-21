#include <stdio.h>

int main()
{
    int i = 0,n;

    printf("\n Insira um numero: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(i % 2 != 0)
        {
            printf("\n %d", i);
            i++;
        }
        if(i % 2 == 0)
        {
            i++;
        }
    }

    printf("\n\n\n Fim!");
    return 0;
}
