#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    bool a = true;
    bool b = false;

    if(a)
        printf("a � verdadeiro\n");

    if(b)
        printf("b � verdadeiro\n");
        else
        printf("b � falso\n");

    if(!b)
        printf("b � falso\n");

return 0;
}
