#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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
                const int LINHAS = 5, COLUNAS = 5;
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
                    printf("Escolha a linha do primeiro navio (Min: 0, Max: 4): ");
                    scanf("%d", &nlinha1);
                } while(nlinha1 < 0 || nlinha1 >= LINHAS);

                
                do 
                {
                    printf("Escolha a coluna inicial do primeiro navio (Min: 0, Max: 3): ");
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
                    printf("Escolha a linha do segundo navio (Min 1, Max: 4)");
                    scanf("%d", &nlinha2);
                } while (nlinha2 < 1 || nlinha2 >= LINHAS);

                do
                {
                    printf("Escolha a coluna do segundo navio (Min 0, Max: 4)");
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

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0


