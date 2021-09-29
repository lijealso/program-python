#include <iostream>
using namespace std;

int main()
{
    string comida = "pizza";
    string* apontador = &comida; // apontador armazena o endereço de memória da variável

    cout << comida << endl; // valor de comida

    cout << &comida << endl; // endereço de memória da variável

    cout << apontador; // endereço de memória com apontador

    return 0;
}
