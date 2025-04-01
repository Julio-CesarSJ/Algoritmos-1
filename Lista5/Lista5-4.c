#include <stdio.h>

int main()
{
    int i,num;

    for(i=0;i!=10;i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &num);

        if((num > 25)&&(num < 85))
        {
            printf("\n %d > 25 \n %d < 85", num, num);
        }
    }

    printf("\n FIM!");

    return 0;
}
