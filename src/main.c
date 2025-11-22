#include "rpg.h"
#include "player.h"
#include "combate.h"
#include "world.h"
#include "storage.h"

int main() {
    srand(time(NULL));

    int escolhaPlay;
    struct jogador player;

    titulo();
    sleep(2);

    printf("\n\n1-carregar jogo\n");
    printf("2-novo jogo\n");
    scanf("%d", &escolhaPlay);
    limpar_buffer();

    if (escolhaPlay == 1)
        carregar_progresso(&player);
    else
        playerClasse(&player);

    sleep(2);

    do {
        printf("\n      Menu principal: \n\n");
        printf("0-Sair\n");
        printf("1-Combate\n");
        printf("2-Loja\n");
        printf("3-Status\n");
        printf("4-Mudar dimenção\n");
        printf("5-Créditos\n");
        printf("6-salvar jogo\n");
        scanf("%d", &escolhaPlay);

        limpar_buffer();

        switch(escolhaPlay) {

        case 0:
            printf("\nobrigado por jogar");
            break;
        case 1:
            iniciarCombate(&player);
            break;
        case 2:
            loja(&player);
            break;
        case 3:
            verStatus(&player);
            break;
        case 4:
            printf("\nem deselvolvimento(não sei fazer, AINDA)");
            break;
        case 5:
            verCreditos();
            break;
        case 6:
            salvar_progresso(&player);
        default:
            printf("inválido");
            break;
        }
    }while(escolhaPlay != 0);

    return 0;
}
