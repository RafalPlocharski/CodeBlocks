#include <stdio.h>
#include <stdlib.h>


int main()
{
    float a,b,c,d,e,f,g,h,i,j;

    printf("Podaj 10 elementow tablicy");

    scanf("%f%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int tablica[10] = {a,b,c,d,e,f,g,h,i,j};

    printf("Pierwszy element tablicy to : %d \n",  tablica[0]);
    printf("Drugi element tablicy to : %d \n",  tablica[1]);
    printf("Trzeci element tablicy to : %d \n",  tablica[2]);
    printf("Czwarty element tablicy to : %d \n",  tablica[3]);
    printf("Piaty element tablicy to : %d \n",  tablica[4]);
    printf("Szosty element tablicy to : %d \n",  tablica[5]);
    printf("Siodmy element tablicy to : %d \n",  tablica[6]);
    printf("Osmy element tablicy to : %d \n",  tablica[7]);
    printf("Dziewiaty element tablicy to : %d \n",  tablica[8]);
    printf("Dziesiaty element tablicy to : %d \n",  tablica[9]);


    return 0;
}
