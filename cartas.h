#ifndef CARTAS_H
#define CARTAS_H

#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int forca;
    int defesa;
    int inteligencia;
    int destreza;
    int cura;
} Carta;

void exibir_carta(Carta c);
Carta gerar_carta_rpg(int id);

#endif