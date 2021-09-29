#include <iostream>
using namespace std;

void minha_funcao(string pais="Noruega")
{
    cout << pais << endl;
}

int main()
{
    minha_funcao("Espanha");
    minha_funcao();
    minha_funcao("Inglaterra");

return 0;
}
