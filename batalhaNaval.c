#include<stdio.h>

int main () {

    //DEFINIÇAO DO TABULEIRO
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10};
    int tabuleiro[10][10];

    //IMPRIME O TABULEIRO
    printf("TABULEIRO DE BATALHA NAVAL: \n"); 
    printf("\n");

        // IMPRIME A LINHA
        printf("   "); // ESPAÇO ENTRE LINHA E COLUNA
        for (int i = 0; i < 10; i++){
        printf("%c ", linha[i]);
        }
    
    printf("\n"); // ESPAÇO ENTRE LINHA E COLUNA

            // IMPRIME A COLUNA
            for (int i = 0; i < 10; i++)    {
            printf("%2d ", coluna[i]); 
            
            // PREENCHE O CORPO DO TABULEIRO COM '0', NESSE CASO 0 É A ÁGUA.
            for (int j = 0; j < 10; j++){ 
            tabuleiro[i][j] = 0;
            printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); //ESPAÇO ENTRE AS LINHAS DE '0'

        }
    
    // IMPRIMINDO O TABULEIRO COM OS NAVIOS

    printf("\n");
    printf("TABULEIRO COM NAVIOS: \n");
    printf("\n");

        // CODIGO PARA POSICIONAR OS NAVIOS
        for (int navio1 = 3; navio1 < 6; navio1++) { // PRIMEIRO NAVIO NA HORIZONTAL (POSIÇAO [5][3], [5][4], [5][5])
            tabuleiro[5][navio1] = 3; // LINHA 5 E COLUNA 3 = NAVIO1 
        }
        
        for (int navio2 = 1; navio2 < 4; navio2++){ // SEGUNDO NAVIO NA VERTICAL (POSIÇAO [1][9], [2][9], [3][9])
            tabuleiro[navio2][9] = 3; // LINHA 1 = NAVIO2 E COLUNA 9
        }
        for (int navio3 = 1; navio3 < 4; navio3++){ // TERCEIRO NAVIO NA DIAGONAL (POSIÇAO [1][3], [2][2], [1][1])
            tabuleiro[navio3][4-navio3] = 3; // LINHA 1 = NAVIO3 E COLUNA A PARTIR DA 3 (4 - 1 (NAVIO3))
        }
        for (int navio4 = 1; navio4 < 4; navio4++){ // QUARTO NAVIO NA DIAGONAL (POSIÇAO [6][1], [7][2], [9][3])
            tabuleiro[5+navio4][navio4] = 3; // LINHA 1 (NAVIO4) + 5 E COLUNA A PARTIR DA 1
        }
        
        // IMPRIME A LINHA NOVAMENTE
        printf("   ");
        for (int i = 0; i < 10; i++){
        printf("%c ", linha[i]);
        }
        printf("\n"); // ESPAÇO ENTRE LINHA E COLUNA

        // IMPRIME A COLUNA NOVAMENTE
        for (int i = 0; i < 10; i++)    {
        printf("%2d ", coluna[i]); 

        // PREENCHE O CORPO DO TABULEIRO COM '0', NESSE CASO 0 É A ÁGUA.
        for (int j = 0; j < 10; j++){ 
        printf("%d ", tabuleiro[i][j]);
        }
        
        printf("\n"); //ESPAÇO ENTRE AS LINHAS DE
        

    }

}