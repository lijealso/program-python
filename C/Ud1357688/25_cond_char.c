#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// tabela ASCII : web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

    char letra = 'x'; // 120

    if(letra == 'x')
        printf("A letra � 'x'\n");

    // c�digo da letra
    printf("C�digo da letra x �: %d\n", letra);

    if(letra == 120)
        printf("A letra � 'x'\n");

return 0;
}
