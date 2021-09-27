#include <stdio.h>

int main()
{
    int valor;
    int i;
    char binario[8];

    printf("Insira um numero inteiro (de 0 a 255): \n");
    scanf("%d", &valor);

    for (i = 7 ; i >= 0 ; i--)
    {
        binario[i] = valor%2;
        valor = valor/2;
        printf("valor do bit: %d = %d\n", i, binario[i]);
    }
        printf("Representação em binario: |");
    for (i = 0 ; i <8 ; i++)
    {
        printf(" %d |", binario[i]);
    }
    return 0;
}
