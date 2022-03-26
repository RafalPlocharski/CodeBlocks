#include <stdio.h>
#include <stdlib.h>
void naj(void);
int main()
{
    printf("Podaj trzy liczby \n");
    naj();
    return 0;
}
void naj(void)
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    int tablica[3] = {a,b,c};

int najmniejsza = tablica[0];
for (int i=0; i<3; i++)
    if(tablica[i] < najmniejsza)
    najmniejsza = tablica[i];
printf("Najmniejsza podana liczba to: %d \n", najmniejsza);

int najwieksza = tablica[0];
for (int i=0; i<3; i++)
    if(tablica[i] > najwieksza)
    najwieksza = tablica[i];
printf("Najwieksza podana liczba to: %d", najwieksza);

}
