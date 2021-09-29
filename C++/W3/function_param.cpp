#include <iostream>
using namespace std;

void minha_funcao(string nome_completo) // nome_completo é um parâmetro
{
    cout << nome_completo << " Alzira\n";
}

int main()
{
    minha_funcao("Joao"); // passa um argumento
    minha_funcao("Maria");

return 0;
}
