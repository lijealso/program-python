#include <iostream>
using namespace std;

int main()
{
    string comida = "pizza";
    string* apontador = &comida;

    cout << apontador << endl; // obtem o endere�o
    cout << *apontador << endl; // obtem o valor

    *apontador = "sopa";

    cout << comida << endl;
    cout << *apontador << endl;


return 0;
}
