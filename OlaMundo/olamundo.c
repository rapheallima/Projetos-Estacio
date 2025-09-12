#include <stdio.h>

int main()
{
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("\n");

    printf("Entre com a temperatura:");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:");
    scanf("%f", &umidade);
    printf("Entre com o estoque:");
    scanf("%u", &estoque);

    printf("\n");

    if (temperatura > 30)
    {
        printf("Temperatura esta elevada\n");
    }
    else
    {
        printf("Temperatura esta normal\n");
    }

    if (umidade > 50)
    {
        printf("Umidade elevada\n");
    }
    else
    {
        printf("Umidade esta normal\n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque abaixo do minimo\n");
    }
    else
    {
        printf("Estoque normal\n");
    }

    printf("\n\n");

    return 0;
}
