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

                int podercruz1, podercruz2;

                do 
                {
                    printf("Escolha a coluna afetada (Min: 0, Max: 9): ");
                    scanf("%d", &podercruz1);
                } while (podercruz1 < 0 || podercruz1 >= COLUNAS);

                do 
                {
                    printf("Escolha a linha afetada (Min: 0, Max: 9): ");
                    scanf("%d", &podercruz2);
                } while (podercruz2 < 0 || podercruz2 >= LINHAS);

                // Aplicação do poder especial (em cruz) com verificações de limites
                tabuleiro[podercruz2][podercruz1] = 2; // Marca o centro como 2 (ou outro número que você preferir)

                if (podercruz2 > 0) // Acima
                    tabuleiro[podercruz2 - 1][podercruz1] = 2;
                if (podercruz2 < LINHAS - 1) // Abaixo
                    tabuleiro[podercruz2 + 1][podercruz1] = 2;
                if (podercruz1 > 0) // Esquerda
                    tabuleiro[podercruz2][podercruz1 - 1] = 2;
                if (podercruz1 < COLUNAS - 1) // Direita
                    tabuleiro[podercruz2][podercruz1 + 1] = 2;

                // Imprime o tabuleiro com o poder especial aplicado
                printf("Tabuleiro com o poder especial aplicado:\n");
                for (int x = 0; x < LINHAS; x++) {
                    for (int y = 0; y < COLUNAS; y++) {
                        printf("%d ", tabuleiro[x][y]);
                    }
                    printf("\n");
                }

                // Habilidade especial em cone
                int podercone1, podercone2;

                // Escolha do ponto inicial para a habilidade em cone
                do {
                    printf("Escolha a coluna do vértice do cone (Min: 2, Max: 7): ");
                    scanf("%d", &podercone1);
                } while (podercone1 < 2 || podercone1 >= COLUNAS - 2);

                do {
                    printf("Escolha a linha do vértice do cone (Min: 0, Max: 7): ");
                    scanf("%d", &podercone2);
                } while (podercone2 < 0 || podercone2 >= LINHAS - 2);

                // Aplicação do cone no tabuleiro
                tabuleiro[podercone2][podercone1] = 3; // Vértice do cone
                if (podercone2 + 1 < LINHAS) {
                    tabuleiro[podercone2 + 1][podercone1 - 1] = 3;
                    tabuleiro[podercone2 + 1][podercone1] = 3;
                    tabuleiro[podercone2 + 1][podercone1 + 1] = 3;
                }
                if (podercone2 + 2 < LINHAS) {
                    tabuleiro[podercone2 + 2][podercone1 - 2] = 3;
                    tabuleiro[podercone2 + 2][podercone1 - 1] = 3;
                    tabuleiro[podercone2 + 2][podercone1] = 3;
                    tabuleiro[podercone2 + 2][podercone1 + 1] = 3;
                    tabuleiro[podercone2 + 2][podercone1 + 2] = 3;
                }

                // Imprime o tabuleiro com o cone aplicado
                printf("Tabuleiro com o cone aplicado:\n");
                for (int x = 0; x < LINHAS; x++) {
                    for (int y = 0; y < COLUNAS; y++) {
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
