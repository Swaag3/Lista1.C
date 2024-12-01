#include <stdio.h>

int main() {
    const int NUM_JOGADORES = 3;
    const int NUM_JOGOS = 5;

    int pontos[NUM_JOGADORES][NUM_JOGOS];

    // Leitura das pontuações
    printf("Digite a pontuação de cada jogador em cada jogo:\n");
    for (int i = 0; i < NUM_JOGADORES; i++) {
        for (int j = 0; j < NUM_JOGOS; j++) {
            printf("Jogador %d, jogo %d: ", i + 1, j + 1);
            scanf("%d", &pontos[i][j]);
        }
    }

    // Cálculo da pontuação total de cada jogador
    int pontuacaoTotal[NUM_JOGADORES] = {0};
    for (int i = 0; i < NUM_JOGADORES; i++) {
        for (int j = 0; j < NUM_JOGOS; j++) {
            pontuacaoTotal[i] += pontos[i][j];
        }
    }

    // Encontrar o vencedor
    int maiorPontuacao = pontuacaoTotal[0];
    int vencedor = 0;
    for (int i = 1; i < NUM_JOGADORES; i++) {
        if (pontuacaoTotal[i] > maiorPontuacao) {
            maiorPontuacao = pontuacaoTotal[i];
            vencedor = i;
        }
    }

    // Exibir resultados
    printf("\nPontuação dos jogadores:\n");
    for (int i = 0; i < NUM_JOGADORES; i++) {
        printf("Jogador %d - %d pontos\n", i + 1, pontuacaoTotal[i]);
    }

    printf("Vencedor: Jogador %d\n", vencedor + 1);

    return 0;
}
