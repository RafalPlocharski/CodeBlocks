#include <math.h>
#include <stdio.h>
void rownanie(void);
int main()
{
    double a, b;

    printf("Podaj wspolczynnik a i b: ");
    rownanie();

    return 0;
}
void rownanie(void)
{
    double a, b, wzor, pierwiastek1, pierwiasetk2, prawd, nieprawd;
    scanf("%lf %lf", &a, &b);
    wzor = b * b + 4 * a + 8;

    if (wzor > 0) {
        pierwiastek1 = (-b + sqrt(wzor)) / (2 * a);
        pierwiasetk2 = (-b - sqrt(wzor)) / (2 * a);
        printf("pierwiastek1 = %.2lf i pierwiasetk2 = %.2lf", pierwiastek1, pierwiasetk2);
    }

    else if (wzor == 0) {
        pierwiastek1 = pierwiasetk2 = -b / (2 * a);
        printf("pierwiastek1 = pierwiasetk2 = %.2lf;", pierwiastek1);
    }

    else {
        prawd = -b / (2 * a);
        nieprawd = sqrt(-wzor) / (2 * a);
        printf("pierwiastek1 = %.2lf+%.2lfi i pierwiasetk2 = %.2f-%.2fi", prawd, nieprawd, prawd, nieprawd);
    }

    return 0;
}
