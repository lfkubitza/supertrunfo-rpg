#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "personagem.h"

int escolherAtributo() {
    int escolha;
    printf("\nEscolha o atributo para competir:\n");
    printf("1. Força\n2. Defesa\n3. Inteligência\n4. Destreza\n5. Cura\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

int comparar(Personagem p1, Personagem p2, int atributo) {
    switch (atributo) {
        case 1: return p1.forca - p2.forca;
        case 2: return p1.defesa - p2.defesa;
        case 3: return p1.inteligencia - p2.inteligencia;
        case 4: return p1.destreza - p2.destreza;
        case 5: return p1.cura - p2.cura;
        default: return 0;
    }
}

int main() {
    Personagem personagens[6];
    int quantidade;
    inicializarPersonagens(personagens, &quantidade);

    srand(time(NULL));
    int idxJogador = rand() % quantidade;
    int idxPC = rand() % quantidade;

    printf("\nSeu personagem:\n");
    exibirPersonagem(personagens[idxJogador]);

    printf("\nPersonagem do PC:\n");
    exibirPersonagem(personagens[idxPC]);

    int atributo = escolherAtributo();
    int resultado = comparar(personagens[idxJogador], personagens[idxPC], atributo);

    if (resultado > 0) {
        printf("\nVocê venceu!\n");
    } else if (resultado < 0) {
        printf("\nVocê perdeu.\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
