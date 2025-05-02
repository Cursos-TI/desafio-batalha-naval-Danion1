#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};  // 0 = água
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int indexl, indexc;

    // Mostrar o tabuleiro inicial
    printf("Tabuleiro Batalha Naval...\n");
    printf("   "); // espaço para alinhar com os números das linhas
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);  // letras das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (i < 9)
            printf(" %d ", i + 1);
        else
            printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // posicionar o navio
    printf("Digite a linha do navio (1 a 10): ");
    scanf("%d", &indexl);
    printf("Digite a coluna do navio (1 a 10): ");
    scanf("%d", &indexc);

    // Verificação da posição
    if (indexl >= 1 && indexl <= 10 && indexc >= 1 && indexc <= 10) {
        if (tabuleiro[indexl - 1][indexc - 1] == 0) {
            tabuleiro[indexl - 1][indexc - 1] = 3;  // 3 para representar o navio
            printf("Navio adicionado com sucesso!\n");
        } else {
            printf("Já existe algo nessa posição.\n");
        }
    } else {
        printf("Posição inválida. Tente novamente.\n");
    }

    // Mostrar o tabuleiro atualizado
    printf("\nTabuleiro Atualizado:\n");
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c", coluna[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (i < 9)
            printf(" %d ", i + 1);
        else
            printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
