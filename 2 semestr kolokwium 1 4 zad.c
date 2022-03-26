#include <stdio.h>
#include <stdlib.h>
void nb(void);
int main()
{
    int i, n;

    printf("Wprowadz n: ");
 nb();


    return 0;
}
void nb(void)
{
    int i, n;

    printf("Wprowadz n: ");
    scanf("%d", &n);

    printf("Liczby naturalne od  1 do  %d : \n", n);

    for(i=1; i<=n; i++)

        printf("%d\n", i);
}

//#include <stdio.h>
//#include <stdlib.h>
//void nb(void);
//int main()
//{
//    int i, n,num1, rem1;
//printf("Wprowadz n: ");
//    scanf("%d", &n);
 //   nb();
//
//
 //   return 0;
//}
//void nb(void)
//{
 //   int i, n,num1, rem1;
 //   printf("Wprowadz n: ");
 //   scanf("%d", &n);
//
 //   printf("Liczby naturalne od  1 do  %d : \n", n);
//
 //   for(i=1; i<=n; i++)
 //   rem1 = num1 % 2;
 //   if (rem1 == 0)
 //       printf("%d\n", num1);
 //       else
 //           printf("%d\n",num1);
//}
