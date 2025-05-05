#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(int tabuleiro[LINHAS][COLUNAS], char coluna[COLUNAS]) {
    printf("   ");
    for (int j = 0; j < COLUNAS; j++)
        printf(" %c", coluna[j]);
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};  // 0 = água
    char coluna[COLUNAS] = {'A','B','C','D','E','F','G','H','I','J'};
    int indexl, indexc, navios_colocados = 0;

    // Loop para colocar 4 navios
    while (navios_colocados < 4) {
        printf("\nTabuleiro Atualizado:\n");
        imprimir_tabuleiro(tabuleiro, coluna);

        printf("\nPosicionando navio %d\n", navios_colocados + 1);
        printf("Digite a linha inicial (1 a 10): ");
        scanf("%d", &indexl);
        printf("Digite a coluna inicial (1 a 10): ");
        scanf("%d", &indexc);

        // Verificação da posição
        if (indexl >= 1 && indexl <= 10 && indexc >= 1 && indexc <= 10) {
            if (tabuleiro[indexl - 1][indexc - 1] == 0) {
                tabuleiro[indexl - 1][indexc - 1] = 3;  // 3 representa navio
                navios_colocados++;
                printf("Navio adicionado com sucesso!\n");
            } else {
                printf("Já existe algo nessa posição.\n");
            }
        } else {
            printf("Posição inválida. Tente novamente.\n");
        }
    }

    // Mostrar tabuleiro final
    printf("\nTodos os navios foram posicionados!\n");
    imprimir_tabuleiro(tabuleiro, coluna);

    return 0;
}