#include <stdio.h>

int main()
{
    int div;

    for(int i = 2; i <=20000;i++)
    {
        div = 1;
        for(int j = 2; j*j <= i ;j++)
        {
            if(i % j == 0)
            {
                div=0;
                break;
            }
        }

        if(div == 1)
        {
            printf("\n %d", i);
        }
    }

    return 0;
}
