#include<stdio.h>
#include<math.h>

int main(){
  float a,b,x;
  float d,wynik1,wynik2;


  printf("Podaj a i b dla rownania a*x^2+2*b*x+4=0 ");
  scanf("%f%f",&a,&b);

  d = a * (x*x) + 2 * b * x + 4;

  if(d < 0){
    printf("Wynik to liczy zespolone.\n");

    printf("Wyniki rownania to: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));

    return 0;
  }
  else if(d==0){
   printf("Obydwa wyniki sa rowne.\n");

   wynik1 = -b /(2* a);
   printf("Wynik rownania to: %.3f ",wynik1);

   return 0;
  }
  else{
   printf("Wynik to liczby rzeczywiste.\n");

   wynik1 = ( -b + sqrt(d)) / (2* a);
   wynik2 = ( -b - sqrt(d)) / (2* a);
   printf("Wynik rownania to: %.3f , %.3f",wynik1,wynik2);
  }

  return 0;
}
