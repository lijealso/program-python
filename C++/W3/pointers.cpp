#include <iostream>
using namespace std;

int main()
{
    string comida = "pizza";
    string* apontador = &comida; // apontador armazena o endere�o de mem�ria da vari�vel

    cout << comida << endl; // valor de comida

    cout << &comida << endl; // endere�o de mem�ria da vari�vel

    cout << apontador; // endere�o de mem�ria com apontador

    return 0;
}
