#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

// ler 3 n�meros inteiros de uma s� vez
// resultado da multiplica��o numa vari�vel
// mostrar a vari�vel

    int x, y, z;
    int resultado;

    scanf("%d %d %d", &x, &y, &z);
    resultado = x * y * z;

    printf("Resultado: %d", resultado);

return 0;
}
