#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{ setlocale(LC_ALL,"Portuguese"); // permite usar acentos

    int a = 5, b;

    printf("%d", a);

    printf("O valor de a � %d\n", a);

    a = 15;
    printf("O valor de a � %d\n", a);

    scanf("%d", &b);
    printf("O valor de b � %d", b);

    printf("\n");

    printf("\n\nUhuuuuu");

    system("pause");
return 0;
}
