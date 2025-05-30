#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo, pontos;
    char nome[30];
    float populacao;
    double area, PIB;

    //Variaveis da segunda carta.

    int codigo2, pontos2;
    char nome2[30];
    float populacao2;
    double area2, PIB2;



    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    //CADASTRO DA SEGUNDA CARTA

    printf("\n***Registro de dados da segunda carta***\n");
    printf("Digite o codigo da segunda cidade:\n");
    scanf("%d", &codigo2);

    printf("Digite o segundo número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    printf("Agora digite o segundo nome da cidade:\n");
    scanf("%s", nome2);

    printf("Agora digite a segunda população: \n");
    scanf("%f", &populacao2);

    printf("Agora digite a segunda área:\n");
    scanf("%lf", &area2);

    printf("Agora digite o segundo PIB:\n");
    scanf("%lf", &PIB2);   
    

    //Calculo do SUPERPODER.
    //As variaveis serão tratadas como int para fins de cálculo.

    int superpoder = codigo + pontos + (int)populacao + (int)area + PIB;
    int superpoder2 = codigo2 + pontos2 + (int)populacao2 + (int)area2 + (int)PIB2;



    // Novas Propriedades Calculadas:
    //Densidade Populacional: População dividida pela área da cidade.
    //PIB per Capita: PIB total dividido pela população.

    float densidade = (float) populacao / area;
    float PIBperCAPITA = (float) PIB / populacao;
    

    float densidade2 = (float) populacao2 / area2;
    float PIBperCAPITA2 = (float) PIB2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n***Dados da primeira carta***\n");
    printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n Densidade: %.3f\n PIB per Capita de: %.3f\n Superpoder: %d\n", nome, codigo, pontos, populacao, area, PIB, densidade, PIBperCAPITA, superpoder);
    printf("\n***Dados da segunda carta***\n");
    printf("Cidade: %s\n Codigo: %d\n Pontos: %d\n População: %.3f\n Área: %.3lf\n PIB: %.3lf\n Densidade: %.3f\n PIB per Capita de: %.3f\n Superpoder: %d\n", nome2, codigo2, pontos2, populacao2, area2, PIB2, densidade2, PIBperCAPITA2, superpoder2);

    //Compara os valores de superpoder das cartas para decidir um ganhador

    if (superpoder > superpoder2) {
        printf("\nA primeira carta é a ganhadora\n");
    }
    else if (superpoder < superpoder2) {
        printf("\nA segunda carta é a ganhadora\n");
    }
    else {
        printf("\nAs duas cidades têm o mesmo poder!\n");
    }

    return 0;

}
