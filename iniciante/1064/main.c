#include <stdio.h>

int main (void) {
    int i,
        q = 0;

    double  numero,
            soma = 0.0;


    for (i = 0; i < 6; i++) {
        scanf("%lf", &numero);

        if (numero > 0.0) {
            soma += numero;
            q++;
        }
    }

    printf("%d valores positivos\n", q);
    printf("%.1f\n", soma / q);

    return 0;
}
