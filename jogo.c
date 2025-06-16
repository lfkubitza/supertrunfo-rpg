#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"
#include "cartas.h"

void iniciar_jogo() {
    srand((unsigned)time(NULL));

    Carta jogador = gerar_carta_rpg(rand() % 6);
    Carta inimigo = gerar_carta_rpg(rand() % 6);

    printf("\nSua carta:");
    exibir_carta(jogador);

    printf("\nEscolha um atributo:\n");
    printf("1 - Força\n2 - Defesa\n3 - Inteligência\n4 - Destreza\n5 - Cura\n> ");

    int escolha;
    if (scanf("%d", &escolha) != 1) {
        printf("Entrada invalida.\n");
        return;
    }

    int vj, vi;
    switch (escolha) {
        case 1: vj = jogador.forca; vi = inimigo.forca; break;
        case 2: vj = jogador.defesa; vi = inimigo.defesa; break;
        case 3: vj = jogador.inteligencia; vi = inimigo.inteligencia; break;
        case 4: vj = jogador.destreza; vi = inimigo.destreza; break;
        case 5: vj = jogador.cura; vi = inimigo.cura; break;
        default:
            printf("Opcao invalida.\n");
            return;
    }

    printf("\nCarta do inimigo:");
    exibir_carta(inimigo);

    if (vj > vi)
        printf("\n🎉 Você venceu!\n");
    else if (vj < vi)
        printf("\n😞 Você perdeu.\n");
    else
        printf("\n😐 Empatou.\n");
}