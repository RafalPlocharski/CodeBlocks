#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i, ilosc, liczba[20];
   printf("Ile Podasz Liczb? \n");
   scanf("%d", &ilosc);
   printf("Podaj liczby:");
   for (i = 0; i < ilosc; ++i)
      scanf("%d", &liczba[i]);

   liczby_rosnaco(liczba, ilosc);
}

void liczby_rosnaco(int liczba[], int ilosc)
{
   int abc, i, j, k;
   for (j = 0; j < ilosc; ++j)
   {
      for (k = j + 1; k < ilosc; ++k)
      {
         if (liczba[j] > liczba[k])
         {
            abc = liczba[j];
            liczba[j] = liczba[k];
            liczba[k] = abc;
         }
      }
   }
   printf("Liczby od najmniejszej do najwiekszej:\n");
   for (i = 0; i < ilosc; ++i)
      printf("%d\n", liczba[i]);
}
