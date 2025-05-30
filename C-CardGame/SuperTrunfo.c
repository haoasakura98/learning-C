#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Menu inicial
    int menu;

    printf("Menu SuperTrunfo\n");
    printf("1. Jogar  2. Regras  3. Sair\n");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
        // Definição das variáveis para armazenar as propriedades das cidades
        {
            int codigo, pontos;
            char nome[30];
            float populacao;
            double area, PIB;

            // Variáveis da segunda carta.
            int codigo2, pontos2;
            char nome2[30];
            float populacao2;
            double area2, PIB2;

            // Cadastro da primeira Carta:
            printf("\n***Registro de dados da primeira carta***\n");
            printf("Digite o codigo da cidade:\n");
            scanf("%d", &codigo);

            printf("Digite o número de pontos turísticos:\n");
            scanf("%d", &pontos);

            printf("Agora digite o nome da cidade:\n");
            scanf("%s", nome);

            printf("Agora digite a população: \n");
            scanf("%f", &populacao);

            printf("Agora digite a área:\n");
            scanf("%lf", &area);

            printf("Agora digite o PIB:\n");
            scanf("%lf", &PIB);

            // Cadastro da segunda carta de forma aleatória
            printf("Qual o nome da segunda carta?\n");
            scanf("%s", nome2);

            srand(time(0));
            codigo2 = rand() % 9 + 1;
            pontos2 = rand() % 9 + 1;
            populacao2 = rand() % 999;
            area2 = rand() % 999;
            PIB2 = rand() % 999;

            // Cálculo do PIB per capita para ambas as cidades
            float PIBperCAPITA = (float)PIB / populacao;
            float PIBperCAPITA2 = (float)PIB2 / populacao2;

            // Cálculo da densidade para ambas as cidades
            float densidade = populacao / (float)area;
            float densidade2 = populacao2 / (float)area2;

            printf("\n***As cartas foram cadastradas com sucesso***\n");

            // ESCOLHA DOS ATRIBUTOS A SEREM DISPUTADOS.
            int atributo1, atributo2;
            printf("Escolha dois critérios que serão disputados pelas cartas\n");
            printf("1. Codigo 2. Pontos 3. População 4. Área 5. PIBperCAPITA 6. Densidade");
            scanf("%d", &atributo1);
            printf("Agora escolha o segundo atributo.\n");
            scanf("%d", &atributo2);

            // Exibição dos Dados das Cartas:
            printf("\n***Dados da primeira carta***\n");
            printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n PIB per Capita: %.3f Densidade: %.3f\n", nome, codigo, pontos, populacao, area, PIB, PIBperCAPITA, densidade);
            printf("\n***Dados da segunda carta***\n");
            printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n PIB per Capita: %.3f Densidade: %.3f\n", nome2, codigo2, pontos2, populacao2, area2, PIB2, PIBperCAPITA2, densidade2);

            // Inicializando variáveis de controle para vitória nos critérios
            int venceu_atributo1 = 0;
            int venceu_atributo2 = 0;

            // Comparação de Cartas através de operador ternário
            // o valor de venceu_atributo será 1 caso a primeira carta ganhe e -1 caso a segunda carta ganhe
            switch(atributo1) {
                case 1:
                    venceu_atributo1 = (codigo > codigo2) ? 1 : (codigo < codigo2) ? -1 : 0;
                    break;
                case 2:
                    venceu_atributo1 = (pontos > pontos2) ? 1 : (pontos < pontos2) ? -1 : 0;
                    break;
                case 3:
                    venceu_atributo1 = (populacao > populacao2) ? 1 : (populacao < populacao2) ? -1 : 0;
                    break;
                case 4:
                    venceu_atributo1 = (area > area2) ? 1 : (area < area2) ? -1 : 0;
                    break;
                case 5:
                    venceu_atributo1 = (PIBperCAPITA > PIBperCAPITA2) ? 1 : (PIBperCAPITA < PIBperCAPITA2) ? -1 : 0;
                    break;
                case 6:
                    venceu_atributo1 = (densidade > densidade2) ? 1 : (densidade < densidade2) ? -1 : 0;
                    break;
                default:
                    printf("opcao invalida");
                    return 0;
            }

            switch(atributo2) {
                case 1:
                    venceu_atributo2 = (codigo > codigo2) ? 1 : (codigo < codigo2) ? -1 : 0;
                    break;
                case 2:
                    venceu_atributo2 = (pontos > pontos2) ? 1 : (pontos < pontos2) ? -1 : 0;
                    break;
                case 3:
                    venceu_atributo2 = (populacao > populacao2) ? 1 : (populacao < populacao2) ? -1 : 0;
                    break;
                case 4:
                    venceu_atributo2 = (area > area2) ? 1 : (area < area2) ? -1 : 0;
                    break;
                case 5:
                    venceu_atributo2 = (PIBperCAPITA > PIBperCAPITA2) ? 1 : (PIBperCAPITA < PIBperCAPITA2) ? -1 : 0;
                    break;
                case 6:
                    venceu_atributo2 = (densidade > densidade2) ? 1 : (densidade < densidade2) ? -1 : 0;
                    break;
                default:
                    printf("opcao invalida");
                    return 0;
            }

            // Exibição do Vencedor baseado nos dois critérios:
            printf("\nComparando a área e o PIB per capita das cartas...\n");

            if (venceu_atributo1 == 1 && venceu_atributo2 == 1) {
                printf("\nA carta 1 venceu nos dois critérios!\n");
            } else if (venceu_atributo1 == -1 && venceu_atributo2 == -1) {
                printf("\nA carta 2 venceu nos dois critérios!\n");
            } else {
                printf("\nEmpate! Cada carta venceu em um critério diferente.\n");
            }
        }
        break;

        case 2:
            printf("\nRegras do jogo:\n");
            printf("1. Cada carta possui atributos como população, área, PIB, PIB per capita, densidade, código e pontos turísticos.\n");
            printf("2. O vencedor é a carta que ganhar nos dois atributos escolhidos pelo jogador.\n");
            printf("3. Empate ocorre se cada carta vencer em um critério.\n");
        break;

        case 3:
            return 0;
        break;

        default:
            printf("Opção inválida\n");
        break;
    }

    return 0;
}
