#include <stdio.h>

int main (void) {
    int inicio,
        quantidade,
        soma = 0;

    scanf("%d", &inicio);

    while (scanf("%d", &quantidade), quantidade < 1);

    while (quantidade-- > 0) {
        soma += inicio++;
    }

    printf("%d\n", soma);

    return 0;
}
