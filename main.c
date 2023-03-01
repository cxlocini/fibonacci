#include <stdio.h>

int main() {
    int anterior = 0;
    int proximo = 1;
    int n;

    printf("Verifique o numero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Insira um valor maior que zero\n");
    } else {
        while (proximo < n) {
            printf("%d\n", proximo);
            proximo = proximo + anterior;
            anterior = proximo - anterior;
        }

        if (anterior == n) {
            printf("Esta dentro da sequencia\n");
        } else {
            printf("Nao esta dentro da sequencia\n");
        }
    }

    return 0;
}
