#include <stdio.h>
#include <stdlib.h>

void wypisz(void);
int main()
{
    printf("Podaj dziesiec elementow tablicy \n");
    wypisz();
}
void wypisz(void)
{
    float a,b,c,d,e,f,g,h,i,j;
    scanf("%f%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int tablica[10] = {a,b,c,d,e,f,g,h,i,j};
    int tablica1 = tablica[1];
    int tablica3 = tablica[3];
    int tablica5 = tablica[5];
    int tablica7 = tablica[7];
    int tablica9 = tablica[9];
    printf("Elementy tablicy to: %d \n", tablica);
    printf("Elementy tablicy z nieparzystym indeksem: %d %d %d %d %d \n", tablica1, tablica3, tablica5, tablica7, tablica9);
}
