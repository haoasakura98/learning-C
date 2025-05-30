#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int menu;

    do
    {
        printf("Bem vindo ao jogo de Batalha Naval.\n");
        printf("1. Jogar  2. Regras   3. Sair\n");
        scanf("%d", &menu);


        switch(menu)
        {

            case 1:
            {
                const int LINHAS = 10, COLUNAS = 10;
                int tabuleiro[LINHAS][COLUNAS];

                // Posição incial zerado do tabuleiro
                for(int x = 0; x < LINHAS; x++)
                {
                    for(int y = 0; y < COLUNAS; y++)
                    {
                        tabuleiro[x][y] = 0;
                    }
                    
                }

                // Imprime o tabuleiro
                printf("Este e o tabuleiro inicial\n");
                for(int x = 0; x < LINHAS; x++)
                {
                    for(int y = 0; y < COLUNAS; y++)
                    {
                        printf("%d ", tabuleiro[x][y]);
                    }
                    printf("\n"); // Quebra de linha após cada linha da matriz
                }

                //Jogador escolhe posição de navios
                int nlinha1, ncoluna1;

                do 
                {
                    printf("Escolha a linha do primeiro navio (Min: 0, Max: 9): ");
                    scanf("%d", &nlinha1);
                } while(nlinha1 < 0 || nlinha1 >= LINHAS);

                
                do 
                {
                    printf("Escolha a coluna inicial do primeiro navio (Min: 0, Max: 8): ");
                    scanf("%d", &ncoluna1);
                } while(ncoluna1 < 0 || ncoluna1 > COLUNAS - 2);

                // Posiciona o navio no tabuleiro (horizontalmente)
                tabuleiro[nlinha1][ncoluna1] = 1; // Primeira parte do navio
                tabuleiro[nlinha1][ncoluna1 + 1] = 1; // Segunda parte do navio

                // Aqui poderia imprimir o tabuleiro novamente para ver o navio posicionado
                printf("Tabuleiro com o navio posicionado:\n");
                for(int x = 0; x < LINHAS; x++)
                {
                    for(int y = 0; y < COLUNAS; y++)
                    {
                        printf("%d ", tabuleiro[x][y]);
                    }
                    printf("\n");
                }

                //Jogador escolhe posicao do segundo navio
                int nlinha2, ncoluna2;

                do
                {
                    printf("Escolha a linha do segundo navio (Min 1, Max: 9)");
                    scanf("%d", &nlinha2);
                } while (nlinha2 < 1 || nlinha2 >= LINHAS);

                do
                {
                    printf("Escolha a coluna do segundo navio (Min 0, Max: 9)");
                    scanf("%d", &ncoluna2);
                } while (ncoluna2 < 0 || ncoluna2 >= COLUNAS);

                // Posiciona o navio no tabuleiro (horizontalmente)
                tabuleiro[nlinha2][ncoluna2] = 1; // Primeira parte do navio
                tabuleiro[nlinha2 - 1][ncoluna2] = 1; // Segunda parte do navio

                // Aqui poderia imprimir o tabuleiro novamente para ver o navio posicionado
                printf("Tabuleiro com o navio posicionado:\n");
                for(int x = 0; x < LINHAS; x++)
                {
                    for(int y = 0; y < COLUNAS; y++)
                    {
                        printf("%d ", tabuleiro[x][y]);
                    }
                    printf("\n");
                }

                //Jogador escolhe posicao do terceiro navio
                int nlinha3, ncoluna3;

                do
                {
                    printf("Escolha a linha do terceiro navio (Min 1, Max: 9)");
                    scanf("%d", &nlinha3);
                } while (nlinha3 < 1 || nlinha3 >= LINHAS);
                do
                {
                    printf("Escolha a coluna do segundo navio (Min 0, Max: 8)");
                    scanf("%d", &ncoluna3);
                } while (ncoluna3 < 0 || ncoluna3 >= COLUNAS - 1);

                // Posiciona o navio no tabuleiro (horizontalmente)
                tabuleiro[nlinha3][ncoluna3] = 1; // Primeira parte do navio
                tabuleiro[nlinha3 - 1][ncoluna3 + 1] = 1; // Segunda parte do navio

                // Aqui poderia imprimir o tabuleiro novamente para ver o navio posicionado
                printf("Tabuleiro com o navio posicionado:\n");
                for(int x = 0; x < LINHAS; x++)
                {
                    for(int y = 0; y < COLUNAS; y++)
                    {
                        printf("%d ", tabuleiro[x][y]);
                    }
                    printf("\n");
                }
            }
            break;


            case 2:
            printf("O jogador deve escolher a posicao inicial do primeiro navio, que sera alocado na horizontal. O segundo segmento sera alocado imediatamente à direita do primeiro segmento\n");
            printf("Em seguida, o jogador deve indicar a posicao inicial do segundo navio, que sera alocado na vertical. O segundo segmento sera alocado imediatamente acima do primeiro segmento\n");
            break;


            case 3:
            printf("Encerrando o jogo. Até a próxima!\n");
            return 0;

            default:
            printf("Opção inválida\n");
        }
    } while (menu != 3);

    return 0;
    

}
