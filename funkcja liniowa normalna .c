#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, x;
    printf("Wprowadz a i b: ");
    scanf("%f%f", &a, &b);

    if(a == 0) {
        if(b == 0){
                printf("brak rozwiazan \n");
    } else {
        printf("kazdy x jest rowny b \n");
    }
    } else {
        printf("x = %.2f\n", -b/a);
    }

    return 0;
}
