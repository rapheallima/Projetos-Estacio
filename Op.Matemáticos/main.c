#include <stdio.h>

int main()
{

    // Testes Operadores Matemáticos
    /*
    soma (+)
    subtração (-)
    multiplicação (*)
    divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: ");
    scanf("%d", &numero1);

    printf("Entre com o numero 2: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    printf("Soma e: %d\n", soma);
    printf("Subtracao e: %d\n", subtracao);
    printf("Multiplicacao e: %d\n", multiplicacao);
    printf("Divisao e: %d\n", divisao);

    return 0;
}