#ifndef EMPTY_HOLLOW_RPG_H
#define EMPTY_HOLLOW_RPG_H

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "itens.h"

enum  classe{MAGO, ESPADACHIM};
enum  dificuldadeInimigo{FRAGMENTO, ESPECTRO, ECO, ARAUTO, BOSS};
enum RaridadeArma {SEM_ARMA,COMUM,EPICA,LENDARIA};

struct arma {
    char nome[50];
    enum RaridadeArma raridade;
    int dano_base;
};

struct inventario {
    int pocao_vida;
    int pocao_energia;
    struct arma arma_equipada;
};
struct jogador{
    char nome[30];
    int ouro, xp, nivel, dano;
    float vida, energia;
    int bonus_dano, max_vida, max_energia;
    struct inventario inventario;

    int classe;
};
struct inimigo {
    int vida, dano;
    int tipo;
};

#endif //EMPTY_HOLLOW_RPG_H
