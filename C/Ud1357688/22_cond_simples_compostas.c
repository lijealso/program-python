#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    int a = 6;
    char b = 'x';
    int opcao = 3;

    if(a==5)
        printf("A vari�vel = 5\n");
    else
        printf("A vari�vel n�o � 5\n");

    if(a%2==0)
        printf("A vari�vel � par\n");
    else
        printf("A vari�vel � impar\n");

    if(b == 'x')
        printf("A vari�vel � x\n");
    else
        printf("A vari�vel n�o � x\n");

    if(opcao == 1)
        printf("A vari�vel � igual a 1\n");
        else if (opcao == 2)
            printf("A vari�vel � igual a 2\n");
            else
            printf("Nao � 1 nem 2\n");



return 0;
}
