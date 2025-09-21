#include <stdio.h>

int main()
{

    // Desafio Novato

    int rainha = 8;
    int bispo = 5;
    int torre = 5;

    // Comando da Torre

    printf("\n\n"); // Divisor de peças

    while (torre > 0)
    {
        printf("A Torre se moveu 1 casa a direita !\n");
        torre--;
    }

    printf("\n\n"); // Divisor de peças

    // Comando do Bispo

    do
    {
        printf("O Bispo moveu-se na diagonal para Cima, Direita !\n");
        bispo--;
    } while (bispo > 0);

    printf("\n\n"); // Divisor de peças

    // Comando da Rainha

    for (rainha; rainha > 0; rainha--)
    {
        printf("A Rainha moveu-se para a esquerda\n");
    }

    printf("\n\n"); // Divisor de peças
}