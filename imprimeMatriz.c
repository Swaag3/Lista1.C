#include <stdio.h>

int main() {
    int n, i, j;

    // Solicita o tamanho da matriz ao usuário
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    // Declara a matriz
    int matriz[n][n];

    // Preenche a matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                matriz[i][j] = i + 1; // Abaixo da diagonal
            } else if (i == j) {
                matriz[i][j] = i + 1; // Na diagonal
            } else {
                matriz[i][j] = 0; // Acima da diagonal
            }
        }
    }

    // Imprime a matriz
    printf("\nMatriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


