#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int liczba = 10;
    int mnozenie = 2.0 * liczba;
    int dokwadratu = pow(liczba,2);
    printf("Zmienna = %d\n", liczba);
    printf("Mnozenie zmiennej = %d\n", mnozenie);
    printf("Zmienna do kwadratu %d\n", dokwadratu);

    return 0;
}
