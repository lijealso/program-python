#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese");

    // imprime ol�
    printf("Ol�\n");

    // ler valor inteiro
    int a = 50;
    printf("O valor de a � = %d\n", a);
    scanf("%d", &a);
    printf("O novo valor de a � = %d\n", a);

    // ler valor float
    float b = 5.5;
    printf("O valor de b � = %.4f\n", b);
    scanf("%f", &b);
    printf("O novo valor de b � = %.4f\n", b);

    // ler valor char
    char c = 't';
    printf("O valor de c � = %c\n", c);
    fflush(stdin); // limpar o buffer de input
    scanf("%c", &c);
    printf("O novo valor de  � = %c\n", c);



return 0;
}
