#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        printf("Os divisores do número %d são: ", numero);

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d", i);

                // Se não for o último divisor, imprima uma vírgula e espaço
                if (i < numero) {
                    printf(", ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}