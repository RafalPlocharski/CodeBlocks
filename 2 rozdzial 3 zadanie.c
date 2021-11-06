#include <stdio.h>
#include <stdlib.h>
#define ROK 365
int main()
{
   float dni;
   printf("Ile masz lat\n");
   scanf("%f", &dni);
   dni = 1.0 * ROK * dni;
   printf("Masz - %1.2f dni\n", dni);
    return 0;
}
