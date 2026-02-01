#include <stdio.h>
#include <windows.h>


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


int main() {

    int menu;


    
    while (1) { // while para que o menu rode em loop e não apenas 1x//

        printf("Bem-vindo ao jogo War - Nivel Novato\n");
        printf("Escolha o que deseja\n");
        printf("1. Jogar  2. Regras  3. Sair \n");
        scanf("%d", &menu);
        limparbuffer();
        

        switch(menu){   
            case 1:
            {
                Territorios mapa[5];
//                system("cls");
                printf("Preencha agora os 5 territórios do mapa \n");
                for (int i = 0; i < 5; i++) {
                    printf("Território %d \n", i + 1);                    
                    printf("Nome do Território: \n");
                    scanf("%s", &mapa[i].nome);
                    printf("Cor do Território: \n");
                    scanf("%s", &mapa[i].cor);
                    printf("Tropas do Território: \n");
                    scanf("%d", &mapa[i].tropas);
                }

//                system("cls");
                for (int i = 0; i < 5; i++){
                    printf("Território %d \n", i + 1);
                    printf("Território: %s || Cor: %s  || Tropas: %d", mapa[i].nome, mapa[i].cor, mapa[i].tropas);
                    printf("\n");
                }
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
