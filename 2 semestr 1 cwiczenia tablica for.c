#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,g,h,i,j;

    printf("Podaj dziesiec elementow tablicy \n");
    scanf("%f%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int tablica[10] = {a,b,c,d,e,f,g,h,i,j};

int najmniejsza = tablica[0];
for (int i=0; i<10; i++)
    if(tablica[i] < najmniejsza)
    najmniejsza = tablica[i];
printf("Najmniejsza podana liczba to: %d \n", najmniejsza);

int najwieksza = tablica[0];
for (int i=0; i<10; i++)
    if(tablica[i] > najwieksza)
    najwieksza = tablica[i];
printf("Najwieksza podana liczba to: %d", najwieksza);

    return 0;
}
