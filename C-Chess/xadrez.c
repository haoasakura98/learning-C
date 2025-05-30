#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() 
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int movimentacao_bispo = 5;
    const int movimentacao_torre = 5;
    const int movimentacao_rainha = 8;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int a = 0;
    printf("A posição de bispo é %d \n", a);

    for (a = 1; a <= movimentacao_bispo; a++)
    {
        printf("Bispo move-se para direita e cima. A posição de bispo é %d \n", a);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    int a = 0;
    printf("A posição de torre é %d \n", a);

    for (a = 1; a <= movimentacao_torre; a++)
    {
        printf("Torre move-se para direita. A posição de torre é %d \n", a);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    
    int c = 0;
    printf("\nA posição de rainha é %d \n", c);

    for (c = 1; c <= movimentacao_rainha; c++)
    {
        printf("Rainha move-se para esquerda. A posição da Rainha é %d \n", c);
    }

   
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //O cavalo se movera em L andando 1 casa na vertical e 2 na horizontal
    // Variáveis de controle para as posições horizontal (d) e vertical (e)

    int d = 0, e = 0; 
    printf("A posição inicial do cavalo é: Vertical = %d, Horizontal = %d\n", e, d);

    for (d = 0; d < 2; d++) 
    {
        // Loop interno para movimentação vertical (1 casa)
        for (e = 0; e < 1; e++) 
        {
            printf("A posição vertical do cavalo é: %d\n", e + 1);
        }
        // Movimento na horizontal (depois do movimento vertical)
        printf("A posição horizontal do cavalo é: %d\n", d + 1);
    }
   
   
   
   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
