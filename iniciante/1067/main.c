#include <stdio.h>

int main (void) {
    int quantidade,
        i;

    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
