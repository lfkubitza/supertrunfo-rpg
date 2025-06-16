#include <stdio.h>
#include "cartas.h"
#include <string.h>

void exibir_carta(Carta c) {
    printf("\n--- %s ---\n", c.nome);
    printf("Forca: %d\n", c.forca);
    printf("Defesa: %d\n", c.defesa);
    printf("Inteligencia: %d\n", c.inteligencia);
    printf("Destreza: %d\n", c.destreza);
    printf("Cura: %d\n", c.cura);
}

Carta gerar_carta_rpg(int id) {
    Carta c;
    memset(&c, 0, sizeof(Carta));
    switch (id) {
        case 0:
            snprintf(c.nome, MAX_NOME, "Guerreiro");
            c.forca=90; c.defesa=80; c.inteligencia=30; c.destreza=60; c.cura=20;
            break;
        case 1:
            snprintf(c.nome, MAX_NOME, "Mago");
            c.forca=30; c.defesa=40; c.inteligencia=95; c.destreza=50; c.cura=60;
            break;
        case 2:
            snprintf(c.nome, MAX_NOME, "Arqueiro");
            c.forca=60; c.defesa=50; c.inteligencia=50; c.destreza=90; c.cura=30;
            break;
        case 3:
            snprintf(c.nome, MAX_NOME, "Assassino");
            c.forca=80; c.defesa=40; c.inteligencia=60; c.destreza=95; c.cura=10;
            break;
        case 4:
            snprintf(c.nome, MAX_NOME, "Paladino");
            c.forca=70; c.defesa=70; c.inteligencia=60; c.destreza=40; c.cura=60;
            break;
        case 5:
            snprintf(c.nome, MAX_NOME, "Curandeiro");
            c.forca=20; c.defesa=40; c.inteligencia=70; c.destreza=30; c.cura=95;
            break;
        default:
            snprintf(c.nome, MAX_NOME, "Carta Invalida");
    }
    return c;
}