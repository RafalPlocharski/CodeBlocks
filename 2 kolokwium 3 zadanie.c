#include <stdio.h>
#include <stdlib.h>

int main()
{

    int bok1, bok2, bok3;

    printf("Podaj dlugosci bokow trojkata \n");
    scanf("%d%d%d", &bok1, &bok2, &bok3);

    if((bok1 + bok2) > bok3)
    {
        if((bok2 + bok3) > bok1)
        {
            if((bok1 + bok3) > bok2)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }

    return 0;
}
