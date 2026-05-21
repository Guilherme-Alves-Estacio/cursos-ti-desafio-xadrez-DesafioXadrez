#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre
void recursaoTorre(int casas)
{
    if (casas > 0)
    {
        printf("Movimento da Torre: Direita\n");
        recursaoTorre(casas - 1);
    }
}

void recursaoBispo(int casas)
{
    if (casas >= 5)
    {
        return;
    }

    for (int i = 0; i < 1; i++)
    {
        printf("Movimento do Bispo: Direita\n");
    }

    printf("Movimento do Bispo: Cima\n");
    printf("\n");

    recursaoBispo(casas + 1);
}

void recursaoRainha(int casas)
{
    if (casas <= 0)
    {
        return;
    }
    printf("Movimento da Rainha: Esquerda\n");
    recursaoRainha(casas - 1);
}

// Nível Mestre

int main()
{
    // Nível Novato - Movimentação das Peças

    // Torre
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Movimento da Torre: Direita\n");
    };

    // Bispo
    int g = 0;
    do
    {
        printf("Movimento do Bispo: Cima Direita\n");

        g++;
    } while (g < 5);

    // Rainha
    int f = 0;
    while (f < 8)
    {
        printf("Movimento da Rainha: Esquerda\n");
        f++;
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Cavalo

    int c = 0;

    while (c < 2)
    {
        for (c; c < 2; c++)
        {
            printf("Movimento do Cavalo: Baixo\n");
        }

        printf("Movimento do Cavalo: Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    recursaoTorre(5);
    printf("\n");
    recursaoBispo(0);
    recursaoRainha(8);
    printf("\n");

    // Cavalo

    for (int c = 0; c < 3; c++)
    {

        if (c < 2)
        {
            printf("Movimento do Cavalo: Cima\n");
            continue;
        }

        for (int d = 0; d < 2; d++)
        {
            printf("Movimento do Cavalo: Direita\n");
            break;
        }
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
