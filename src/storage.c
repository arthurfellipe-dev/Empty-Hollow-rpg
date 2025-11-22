#include "storage.h"

void salvar_progresso(struct jogador *player) {
    FILE *save = fopen("save_empty_hollow.bin", "wb");
    if (save == NULL) {
        printf("\nErro ao tentar salvar o arquivo\n\n");
        return;
    }

    fwrite(player, sizeof(struct jogador), 1 , save);
    fclose(save);

    printf("\njogo salvado com sucesso!\n");

    sleep(1);
}

int carregar_progresso(struct jogador *player){
    FILE *save = fopen("save_empty_hollow.bin", "rb");
    if(save == NULL) {
        printf("\nErro ao abrir arquivo\n\n");
        exit(1);
    }

    fread(player, sizeof(struct jogador), 1, save);
    fclose(save);

    printf("\n olá %s, seja bem vindo novamente!!", player->nome);

    sleep(1);
    return 1;
}
