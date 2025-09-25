#include <stdio.h>

int movendoTorre(int torre)
{

    while (torre > 0)
    {
        printf("A Torre moveu-se para direita !\n");
        torre--;
    }
}

int movendoRainha(int rainha)
{

    for (int i = 0; i < rainha; i++)
    {
        printf("A Rainha moveu-se para esquerda !\n");
    }
}

int movendoBispo(int bispo)
{

    int i, j;

    for (i = 0; i < bispo; i++)
    {
        printf("O Bispo moveu-se para Cima !\n");

        for (j = 0; j < bispo; j++)
        {
            printf("O Bispo moveu-se para Direita !\n");
            break;
        }
    }
}

int main()
{

    // Desafio Novato

    int rainha = 8;
    int bispo = 5;
    int torre = 5;

    // Comando da Torre

    printf("\n\n"); // Divisor de peças

    printf("Movendo a peca Torre.\n\n");

    while (torre > 0)
    {
        printf("A Torre se moveu 1 casa a direita !\n");
        torre--;
    }

    printf("\n\n"); // Divisor de peças

    // Comando do Bispo

    printf("Movendo a peca Bispo.\n\n");

    do
    {
        printf("O Bispo moveu-se na diagonal para Cima, Direita !\n");
        bispo--;
    } while (bispo > 0);

    printf("\n\n"); // Divisor de peças

    // Comando da Rainha

    printf("Movendo a peca Rainha.\n\n");

    for (rainha; rainha > 0; rainha--)
    {
        printf("A Rainha moveu-se para a esquerda\n");
    }

    printf("\n\n"); // Divisor de peças

    // Desafio Aventureiro

    printf("Movendo a peca cavalo.\n\n");

    int i;
    int cavalo = 2;

    for (i = 0; i < cavalo; i++)
    {
        printf("O Cavalo moveu-se para baixo !\n");

        while (i == 1)
        {
            printf("O Cavalo moveu-se para esquerda !\n\n");
            i++;
        }
    }

    // Desafio Mestre

    printf("Movendo a peca cavalo.\n\n"); // Peca Cavalo

    int i1, j;
    int cavalo1 = 10;

    for (i = 0, j = i; i < cavalo1; i++, j--)
    {

        if (i < 2)
        {
            printf("O Cavalo moveu-se para cima !\n");
            continue;
        }
        if (j < 2)
        {
            printf("O Cavalo moveu-se para direita !\n");
            break;
        }
    }

    // Peca Rainha

    int movimentosRainha = 8;

    printf("\n\nMovendo a peca Rainha.\n\n");
    movendoRainha(movimentosRainha);

    // Peca Torre

    int movimentosTorre = 5;

    printf("\n\nMovendo a peca Torre.\n\n");
    movendoTorre(movimentosTorre);

    // Peca Bispo

    int movimentosBispo = 5;

    printf("\n\nMovendo a peca Bispo.\n\n"); // Lógica feita para imprimir 5x cima e 5x direita para simular o movimento diagonal
    movendoBispo(movimentosBispo);

    return 0;
}