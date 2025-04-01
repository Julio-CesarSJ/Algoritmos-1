#include <stdio.h>

int main()
{
    int div,n,primo1,primo2;

    n = 1000;

    printf("\n Numeros Primos Gemeos de 3 a 1000");

    for(int i = 3;i<=n;i++)
    {

        div = 1;
        for(int j = 2;j*j <=i;j++)
        {
            if(i % j == 0)
            {
                div=0;
                break;
            }
        }

        if(div == 1)
        {
            primo1 = i;
            for(int i = 5;i<=n;i++)
            {
                div = 1;
                for(int j = 2;j*j <=i;j++)
                {
                    if(i % j == 0)
                    {
                        div=0;
                        break;
                    }
                }

                if(div == 1)
                {
                    primo2 = i;
                }
                if(primo2 - primo1 == 2)
                {
                    printf("\n %d e %d",primo1,primo2);
                    break;
                }
                }
        }
    }
    return 0;
}
