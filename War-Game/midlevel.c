#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>


// criação da struct dos territórios //
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorios;

//função para limpar o buffer do teclado//
void limparbuffer(){
    while (getchar() != '\n');
}  

// FUNÇÃO ATACAR
void atacar(Territorios *atacante, Territorios *defensor){

    if (atacante->tropas < 4){
        printf("Tropas insuficientes");
        return;
    }

    int dado_atacante = rand() % 6 +1;
    int dado_defensor = rand() % 6 +1;

    printf("Atacante %s conseguiu %d nos dados \n", atacante->nome, dado_atacante);
    printf("Defensor %s conseguiu %d nos dados \n", defensor->nome, dado_defensor);



    if (dado_atacante > dado_defensor){
        defensor->tropas = defensor->tropas - 3;

        if (defensor->tropas <= 0){
            strcpy(defensor->cor, atacante->cor);
            defensor->tropas = 1;
            printf("Território Conquistado! Parabéns! \n");
        }
    }

    else if (dado_defensor > dado_atacante){
        atacante->tropas = atacante->tropas - 3;
    }

    else {
        printf("Empate! Batalha Encerrada \n");
        return;
    }
}

//FUNÇÃO EXIBIÇÃO
void exibir_mapa(Territorios *mapa, int tamanho_mapa){
    for (int i = 0; i < tamanho_mapa; i++){
        printf("Território %d \n", i +1);
        printf("Território: %s || Cor: %s  || Tropas: %d", mapa[i].nome, mapa[i].cor, mapa[i].tropas);
        printf("\n");
    }
}

//FUNÇÃO LIBERAR MEMORIA
void liberarMemoria(Territorios *mapa){
    if (mapa != NULL){
        free(mapa);
    }

}

int main() {

    int menu;
    srand(time(NULL));


    
    while (1) { // while para que o menu rode em loop e não apenas 1x//

        printf("Bem-vindo ao jogo War - Nivel Novato\n");
        printf("Escolha o que deseja\n");
        printf("1. Jogar  2. Regras  3. Sair \n");
        scanf("%d", &menu);  // NÃO HÁ VALIDAÇÃO DE ENTRADA. CASO O USUARIO DIGITE ALGO DIFERENTE HAVERA BUGS
        limparbuffer();

        switch(menu){   
            case 1:
            {
                int jogo_ativo = 1;
                int tamanho_mapa;
                int acao;
                Territorios *mapa = NULL;

                printf("Escolha a quantidade de Territórios: \n");
                scanf("%d", &tamanho_mapa);  // NÃO HÁ VALIDAÇÃO DE ENTRADA. CASO O USUARIO DIGITE ALGO DIFERENTE HAVERA BUGS
                limparbuffer();

                mapa = (Territorios *) calloc(tamanho_mapa, sizeof(Territorios));

                if (mapa == NULL){
                    printf("Erro ao alocar memoria");
                    return 1;
                }

                //CADASTRO DOS TERRITORIOS
                printf("Preencha agora os territórios do mapa \n");
                for (int i = 0; i < tamanho_mapa; i++) {
                    printf("Território %d \n", i + 1);                    
                    printf("Nome do Território: \n");
                    scanf("%s", &mapa[i].nome);
                    printf("Cor do Território: \n");
                    scanf("%s", &mapa[i].cor);
                    printf("Tropas do Território: \n");
                    scanf("%d", &mapa[i].tropas);
                }

                while(jogo_ativo){
                    // EXIBIÇÃO
                    exibir_mapa(mapa, tamanho_mapa);
                    printf("Escolha uma ação \n");
                    printf("1. Atacar  2. Passar turno \n");
                    scanf("%d", &acao);

                    if (acao == 1){
                        int id_atacante, id_defensor;
                        
                        printf("Escolha o território atacante \n");
                        scanf("%d", &id_atacante);

                        printf("Escolha o território atacado \n");
                        scanf("%d", &id_defensor);

                        atacar(&mapa[id_atacante - 1], &mapa[id_defensor - 1]);
                    }

                    if (acao ==2){
                        printf("Passando turno \n");
                    }
                }
            liberarMemoria(mapa);
            }

            break;

            case 2:
                printf("O jogo tem a seguinte mecânica...\n");
                printf("Aperte a tecla ENTER para retornar ao menu");
                getchar();
                break;

            case 3:
                printf("Fechando o jogo");
                return 0;

            default:
                printf("Opção invalida");
                Sleep(3000);
                system("cls");
                break;
        }

    }

}
