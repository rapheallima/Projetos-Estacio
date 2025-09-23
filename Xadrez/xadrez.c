#include <stdio.h>

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

    return 0;
}