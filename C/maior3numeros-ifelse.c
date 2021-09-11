// Programa para encontrar o maior número entre 3 números, usando if else
#include <stdio.h>

void main()
{
    int x , y , z ;                             // declaração de variáveis

    printf("Introduza o primeiro número :");
    scanf("%d",&x);                             // input do primeiro número

    printf("Introduza o segundo número :");
    scanf("%d",&y);                             // input do segundo número

    printf("Introduza o terceiro número :");
    scanf("%d",&z);                             // input do terceiro número

    if (x > y)                                  // Verificar o maior entre o número 1 e número 2
    {
        if (x > z)                              // se o primeiro é maior, verificar com o terceiro
        {
            printf("O número %d é o maior.",x);     // se as condições acima forem verdade, o número 1 é o maior, else, terceiro ? é maior
        }
        else
        {
            printf("O número %d é o maior.",z);     // x > y V --- x > z F = z > x V => z > x > y == z é o número maior
        }
    }
    else                                            // se o número 2 é maior, comparar com o terceiro
    {
        if (y > z)                                  // se verdade, o número 2 é o maior, else, o número 2 é o maior
        {
            printf("O número %d é o maior.",y);
        }
        else
        {
            printf("O número %d é o maior.",z);
        }
    }


}
