#include <stdio.h>

// Função recursiva para movimentação do Bispo
void mover_bispo_aninhado(int limite) 
{
    printf("\nMovimentação do Bispo:\n");
    int x = 0, y = 0; // Coordenadas iniciais
    for (int i = 0; i < limite; i++) 
    { 
        for (int j = 0; j < 1; j++) 
        { 
            x++; // Movimento para a direita
            y++; // Movimento para cima
            printf("Bispo move-se para direita e cima. Posição atual: (%d, %d)\n", x, y);
        }
    }
}

// Função recursiva para movimentação da Torre
void mover_torre(int pos, int limite) 
{
    if (pos >= limite) return; // Condição de parada
    printf("Torre move-se para a direita. Posição atual da Torre: %d\n", pos + 1);
    mover_torre(pos + 1, limite); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void mover_rainha(int pos, int limite) 
{
    if (pos >= limite) return; // Condição de parada
    printf("Rainha move-se para a esquerda. Posição atual da Rainha: %d\n", pos + 1);
    mover_rainha(pos + 1, limite); // Chamada recursiva
}

// Função para movimentação do Cavalo em L com loops aninhados
void mover_cavalo() 
{
    int d = 0, e = 0; // Variáveis para posição horizontal e vertical
    printf("A posição inicial do Cavalo é: Vertical = %d, Horizontal = %d\n", e, d);

    for (int i = 0; i < 1; i++) 
    { 
        e++;
        printf("O Cavalo moveu-se para cima. Posição atual: Vertical = %d, Horizontal = %d\n", e, d);
        
        for (int j = 0; j < 2; j++) 
        {
            d++;
            printf("O Cavalo moveu-se para o lado. Posição atual: Vertical = %d, Horizontal = %d\n", e, d);
        }
    }

    printf("A posição final do Cavalo é: Vertical = %d, Horizontal = %d\n", e, d);
}

int main() 
{
    // Movimentação do Bispo usando loops aninhados
    mover_bispo_aninhado(5); // Bispo move-se 5 casas na diagonal

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    mover_torre(0, 5); // Torre move-se 5 casas

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    mover_rainha(0, 8); // Rainha move-se 8 casas

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    mover_cavalo(); // Cavalo se move em L

    return 0;
}
