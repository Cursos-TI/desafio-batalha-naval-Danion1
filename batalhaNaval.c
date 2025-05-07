#include <stdio.h>
#define linhas 10
#define colunas 10

int main(){
    // Bloco de decalaração de matrizes e vetores.
    const char* coluna[colunas]={"   A ","B ","C ","D ","E ","F ","G ","H ","I ","J "};
    int tabuleiro[linhas][colunas];
    const char* linha[linhas]={"1. " , "2. " , "3. " , "4. " , "5. " , "6. " , "7. " , "8. " , "9. " , "10."};

    // Impressão do nome do jogo
    printf("\nTABULEIRO DE BATALHA NAVAL \n");
    
    // Estrutura de repetição 'for' para impressão das letras que representam as colunas.
    for(int a=0;a<10;a++){
        printf("%s",coluna[a]);
    }
    printf("\n");
    
    
    
    // Estrutura de repetição 'for' para impressão dos números que representam as linhas.
    for(int i=0;i<linhas;i++){
        printf("%s",linha[i]);
        // Estrutura de repetição 'for' para impressão da matriz com os zeros representando a água e os três representam os barcos.
        for(int j=0;j<colunas;j++){
            tabuleiro[i][j]='0';
            int base_x=3,base_y=4;
            for(int b=0;b<2;b++){
                for(int c=-b;c<=b;c++){
                    if((tabuleiro[base_x+b][base_y+c]='0')){
                        tabuleiro[base_x+b][base_y+c]='5';
                    };
                }
            }

            int cruz_x=6,cruz_y=5;
            for(int d=-1;d<=1;d++){
                if((tabuleiro[cruz_x+d][cruz_y]='0')){
                    tabuleiro[cruz_x+d][cruz_y]='5';
                };
            }

            int oct_x=6,oct_y=8;
            for(int e=0;e<=1;e++){
                for(int f=-e;f<=e;f++){
                    if((tabuleiro[oct_x-e][oct_y+f]='0')){
                        tabuleiro[oct_x-e][oct_y+f]='5';
                    };
                    if((tabuleiro[oct_x+e][oct_y+f]='0')){
                        tabuleiro[oct_x+e][oct_y+f]='5';
                    };
                }
            }
            if((tabuleiro[oct_x-1][oct_y]='0')){
                tabuleiro[oct_x-1][oct_y]='5';
            };
            if((tabuleiro[oct_x+1][oct_y]='0')){
                tabuleiro[oct_x+1][oct_y]='5';
            };
            tabuleiro[9][5]='3';
            tabuleiro[9][6]='3';
            tabuleiro[9][7]='3';
            tabuleiro[1][1]='3';
            tabuleiro[2][1]='3';
            tabuleiro[3][1]='3';
            // Limitação de valores da matriz para imprimir barcos na diagonal.
            tabuleiro[7][9-7]='3';
            tabuleiro[8][9-8]='3';
            tabuleiro[9][9-9]='3';
            tabuleiro[0][9-3]='3';
            tabuleiro[1][9-2]='3';
            tabuleiro[2][9-1]='3';
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
    }